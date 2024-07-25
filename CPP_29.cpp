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
    vector<string> input = {"apple", "banana", "orange", "apricot", "pear"};
    vector<string> expected_output = {"apple", "apricot"};
    
    vector<string> result = filter_by_prefix(input, "ap");
    
    assert(result == expected_output);
    
    return 0;
}