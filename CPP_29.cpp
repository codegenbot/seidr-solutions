vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> test_strings = {"apple", "banana", "orange", "pear"};
    string test_prefix = "o";
    vector<string> expected_output = {"orange"};
    vector<string> filtered = filter_by_prefix(test_strings, test_prefix);
    assert(issame(filtered, expected_output));

    return 0;
}