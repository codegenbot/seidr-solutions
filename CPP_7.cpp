#include <vector>
#include <string>
#include <iostream>

vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(string a, string b) {
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
    // main function code here
    return 0;
}