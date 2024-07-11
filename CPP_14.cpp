```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string>, vector<string>);
vector<string> all_prefixes(string);

int main() {
    string str = "WWW";
    if (!issame(all_prefixes(str), {"W", "WW", "WWW"})) {
        std::cout << "Error: Expected prefixes are not the same." << std::endl;
    } else {
        std::cout << "Test passed!" << std::endl;
    }
    return 0;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); ++i) {
        string prefix;
        for (int j = 0; j < i; ++j) {
            char c = str.at(j); // Get character at index j
            prefix += c;
        }
        result.push_back(prefix);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}