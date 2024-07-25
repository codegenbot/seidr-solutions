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
    vector<string> input = {"apple", "banana", "apricot", "orange"};
    string prefix = "ap";
    
    vector<string> expected_output = {"apple", "apricot"};
    
    assert(filter_by_prefix(input, prefix) == expected_output);
    
    return 0;
}