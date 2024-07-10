#include <iostream>
#include <vector>
#include <string>

vector<string> all_prefixes(string str);

bool issame(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
}

int main() {
    string input_str;
    cin >> input_str;

    vector<string> prefixes = all_prefixes(input_str);

    for (const string& prefix : prefixes) {
        cout << prefix << " ";
    }

    return 0;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (size_t i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}