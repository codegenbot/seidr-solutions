#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& s) {
    if (s.empty()) return s;

    std::vector<std::string> words;
    for (char c : s) {
        if (c == '-') {
            words.push_back("");
        } else if (c == ' ') {
            continue; // ignore spaces
        } else {
            string word = (words.back() == "") ? "" : "";
            words.back() += c;
        }
    }

    std::string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result += std::toupper(word[0]);
            result += word.substr(1).tolower();
        } else {
            result = word;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        cout << kebabToCamel(s) << '\n';
    }

    return 0;