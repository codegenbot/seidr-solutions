#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words = {""};
    for (char c : s + " ") {
        if (c == '-') {
            words.back() += char(toupper(c));
        } else if (c == ' ') {
            words.push_back("");
        } else {
            words.back().push_back(c);
        }
    }
    std::string result;
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += toupper(words[i][0]);
        result += words[i].substr(1);
    }
    return result;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << "\n";
    std::cout << kebabToCamel("two-words") << "\n";
    std::cout << kebabToCamel("two words") << "\n";
    std::cout << kebabToCamel("all separate words") << "\n";
    return 0;
}