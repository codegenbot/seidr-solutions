#include <iostream>
#include <vector>
#include <string>

vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(const string &a, const string &b) {
    return a == b;
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

int main() {
    vector<string> input = {"apple", "banana", "orange", "grape"};
    string sub = "an";
    vector<string> filtered = filter_by_substring(input, sub);

    for (const auto &str : filtered) {
        cout << str << " ";
    }

    return 0;
}