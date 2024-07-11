#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    for (const auto& word : s.split(" ")) {
        if (!result.empty()) {
            result[0] = toupper(word[0]);
            result += std::string(1, word).substr(1);
        } else {
            result = word;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << kebabToCamel(s) << endl;
    }
    return 0;
}