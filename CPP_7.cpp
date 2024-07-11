#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b); // Function signature for issame

vector<string> filter_by_substring(vector<string> strings, string substring); // Function declaration for filter_by_substring

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    vector<string> test_strings = {"apple", "banana", "pineapple", "orange"};
    vector<string> expected_result = {"apple", "pineapple"};
    vector<string> filtered_strings = filter_by_substring(test_strings, "apple");
    assert(issame(filtered_strings, expected_result));
    return 0;
}