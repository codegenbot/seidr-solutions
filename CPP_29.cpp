#include <iostream>
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
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

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> filtered_strings;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "orange"};
    string prefix = "ap";
    
    vector<string> filtered_output = filter_by_prefix(strings, prefix);
    
    vector<string> expected_output = {"apple", "apricot"};
    
    if (issame(filtered_output, expected_output)) {
        cout << "Output matches the expected result." << endl;
    } else {
        cout << "Output does not match the expected result." << endl;
    }
    
    return 0;
}