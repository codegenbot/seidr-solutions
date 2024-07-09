#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    vector<string> test_strings = {"apple", "banana", "apricot", "kiwi"};
    vector<string> expected_result = {"apple", "apricot"};
    
    vector<string> result = filter_by_prefix(test_strings, "a");
    
    assert(issame(result, expected_result));
    
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}