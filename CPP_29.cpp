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
    vector<string> input = {"apple", "banana", "apricot", "pear", "peach"};
    string prefix = "ap";
    
    vector<string> expected = {"apple", "apricot"};
    vector<string> actual = filter_by_prefix(input, prefix);
    
    assert(expected == actual);
    
    return 0;
}