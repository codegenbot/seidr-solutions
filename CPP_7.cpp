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
    vector<string> strings = {"apple", "banana", "grape", "pear", "orange"};
    string substring = "ap";
    vector<string> result = filter_by_substring(strings, substring);
    vector<string> expected = {"apple", "grape"};
    assert(issame(result, expected));

    strings = {"cat", "dog", "elephant", "tiger"};
    substring = "e";
    result = filter_by_substring(strings, substring);
    expected = {"elephant"};
    assert(issame(result, expected));

    strings = {"red", "green", "blue"};
    substring = "yellow";
    result = filter_by_substring(strings, substring);
    expected = {};
    assert(issame(result, expected));

    cout << "All test cases passed!" << endl;

    return 0;
}