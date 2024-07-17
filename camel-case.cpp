#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
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
    for (const auto& word : words) {
        if (!word.empty()) {
            if (!result.empty())
                result[0] = toupper(result[0]);
            result += word;
        }
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string str;
        std::cin >> str;
        cout << kebabToCamel(str) << endl;
    }

    return 0;
}