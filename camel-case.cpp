#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = {""};
    for (char c : str + " ") {
        if (c == '-') {
            words.back() += c;
            words.push_back("");
        } else if (c == ' ') {
            continue;
        } else {
            words.back() += tolower(c);
        }
    }

    std::string result = "";
    for (const auto& word : words) {
        if (!word.empty()) {
            if (!result.empty())
                result += char(toupper(word[0]));
            result += word.substr(1);
        }
    }

    return result;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << std::endl; // nospaceordash
    std::cout << kebabToCamel("two-words") << std::endl; // twoWords
    std::cout << kebabToCamel("two words") << std::endl; // two words
    std::cout << kebabToCamel("all separate words") << std::endl; // all separate words

    return 0;
}