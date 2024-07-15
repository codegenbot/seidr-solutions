#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    if (s.empty()) return s;
    
    std::vector<std::string> words = {""};
    for (char c : s + " ") {
        if (c == '-') {
            words.back().pop_back();
            words.push_back("");
        } else if (c == ' ') {
            words.push_back("");
        } else {
            words.back() += c;
        }
    }

    std::string result = "";
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += words[i];
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        std::string s;
        std::cin >> s;
        cout << kebabToCamel(s) << endl;
    }
    
    return 0;
}