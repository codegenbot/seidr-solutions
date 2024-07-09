#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> filtered_strings;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    // Test your code here
    return 0;
}