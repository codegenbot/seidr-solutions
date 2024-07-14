#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& str) {
    std::vector<std::string> words = {""};
    for (char c : str) {
        if (c == '-') {
            words.back() += ' ';
            words.push_back("");
        } else {
            words.back() += c;
        }
    }

    std::string result = "";
    bool capitalizeNext = true;
    for (const auto& word : words) {
        if (!word.empty()) {
            if (capitalizeNext) {
                result += std::toupper(word[0]);
                capitalizeNext = false;
            } else {
                result += word.substr(1);
            }
        } else {
            capitalizeNext = true;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        std::string str;
        cin >> str;
        cout << kebabToCamelCase(str) << endl;
    }

    return 0;
}