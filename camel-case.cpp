#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == '-') {
            words.push_back(s.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result += std::char_traits<char>::toupper(word[0]);
        } else {
            result += word;
        }
        for (size_t i = 1; i < word.size(); ++i) {
            result += std::char_traits<char>::tolower(word[i]);
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}