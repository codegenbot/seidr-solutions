```cpp
#include <vector>
#include <iostream>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s); 
        strings.push_back(s);
    }

    string substring;
    getline(cin, substring);

    std::vector<std::string> result1 = filter_by_substring(strings, substring);
    std::vector<std::string> result2 = filter_by_substring(strings, substring);

    if (issame(result1, result2)) {
        for (const auto& s : result1) {
            cout << s << endl;
        }
    } else {
        cout << "No common elements found." << endl;
    }

    return 0;
}