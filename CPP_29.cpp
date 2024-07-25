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
    
    vector<string> filtered_result = filter_by_prefix(strings, prefix);
    vector<string> expected_result = {"apple", "apricot"};

    if (issame(filtered_result, expected_result)) {
        std::cout << "Output matches expected result." << std::endl;
    } else {
        std::cout << "Output does not match expected result." << std::endl;
    }

    return 0;
}