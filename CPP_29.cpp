#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input_strings = {"apple", "banana", "apricot", "orange"};
    string prefix = "ap";
    vector<string> expected_output = {"apple", "apricot"};

    vector<string> filtered_strings = filter_by_prefix(input_strings, prefix);

    assert(issame(filtered_strings, expected_output));

    return 0;
}