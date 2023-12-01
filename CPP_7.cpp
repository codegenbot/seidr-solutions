#include <iostream> 
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    
    return filtered_strings;
}

int main(){
    vector<string> strings = {"apple", "banana", "orange", "grapefruit"};
    string substring = "an";
    vector<string> expected_output = {"banana", "orange"};
    assert(issame(filter_by_substring(strings, substring), expected_output));

    strings = {"cat", "dog", "elephant", "giraffe"};
    substring = "at";
    expected_output = {"cat", "elephant"};
    assert(issame(filter_by_substring(strings, substring), expected_output));

    cout << "Test cases passed!";
    return 0;
}