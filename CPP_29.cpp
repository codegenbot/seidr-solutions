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
    vector<string> strings = {"apple", "banana", "apricot", "blueberry", "orange"};
    vector<string> expected = {"apple", "apricot"};

    vector<string> result = filter_by_prefix(strings, "ap");

    assert(result == expected);

    return 0;
}