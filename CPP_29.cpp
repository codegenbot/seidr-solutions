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
    vector<string> input = {"apple", "banana", "orange", "pear", "peach"};
    string prefix = "pe";
    
    vector<string> expected = {"pear", "peach"};
    vector<string> output = filter_by_prefix(input, prefix);
    
    assert(output == expected);
    
    return 0;
}