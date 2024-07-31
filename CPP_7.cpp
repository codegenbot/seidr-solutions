#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
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

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> test_input = {"apple", "banana", "grape", "orange"};
    vector<string> expected_output = {"apple", "grape"};
    
    vector<string> result = filter_by_substring(test_input, "ap");

    assert(result == expected_output);
    
    cout << "All tests passed successfully!\n";

    return 0;
}