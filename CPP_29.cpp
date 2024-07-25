#include <cassert>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    
    return result;
}

int main() {
    vector<string> input_strings = {"apple", "banana", "apricot", "orange"};
    string input_prefix = "ap";
    
    vector<string> expected_result = {"apple", "apricot"};
    vector<string> actual_result = filter_by_prefix(input_strings, input_prefix);
    
    assert(expected_result == actual_result);
    
    return 0;
}