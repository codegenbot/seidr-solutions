#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix);

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> test_strings = {"apple", "banana", "apricot", "cherry"};
    string test_prefix = "ap";
    vector<string> filtered_strings = filter_by_prefix(test_strings, test_prefix);

    vector<string> expected_result = {"apple", "apricot"};
    assert(issame(filtered_strings, expected_result));

    return 0;
}