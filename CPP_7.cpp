#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(const vector<string>& strings, const string& substring){
    vector<string> filtered_strings;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main(){
    vector<string> strings = {"apple", "banana", "cherry", "orange", "kiwi"};
    string substring = "an";
    
    vector<string> expected_filtered_strings = {"banana", "orange"};
    
    vector<string> filtered_strings = filter_by_substring(strings, substring);
    
    assert(issame(filtered_strings, expected_filtered_strings));
    
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    cout << "All tests passed" << endl;
    
    return 0;
}