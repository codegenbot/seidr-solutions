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
        // Output matches expected result
    } else {
        // Output does not match expected result
    }
    
    return 0;
}