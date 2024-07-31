#include <iostream>
#include <vector>
#include <string>

bool issame(const string& s1, const string& s2) {
    return s1 == s2;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const string& str : strings) {
        if (issame(substring, str.substr(0, substring.size()))) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Your main function code here
    return 0;
}