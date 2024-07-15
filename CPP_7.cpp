#include <iostream>
#include <vector>
#include <string>

bool issame(const string &a, const string &b) {
    return a.size() == b.size();
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    // Main function implementation
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}