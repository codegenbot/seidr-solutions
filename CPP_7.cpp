#include <iostream>
#include <vector>
#include <string>

bool issame(const string& str1, const string& str2) {
    return str1 == str2;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    vector<string> strings = {"apple", "banana", "cherry", "date"};
    string substring = "an";
    vector<string> result = filter_by_substring(strings, substring);
    
    for (const auto& str : result) {
        cout << str << " ";
    }
    return 0;
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