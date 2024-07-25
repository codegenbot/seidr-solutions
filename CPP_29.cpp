#include <iostream>
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
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
    
    vector<string> expected_output = {"apple", "apricot"};
    vector<string> output = filter_by_prefix(strings, prefix);
    
    if (issame(expected_output, output)) {
        cout << "Output matches expected result." << endl;
    } else {
        cout << "Output does not match expected result." << endl;
    }
    
    return 0;
}