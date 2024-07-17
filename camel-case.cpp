#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::vector<std::string> words = {};
    for (const auto& word : input.split(" ")) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }

    std::string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        const auto& word = words[i];
        if (!result.empty()) {
            result += ((char)toupper((int)word[0]));
        } else {
            result += word;
        }
        for (size_t j = 1; j < word.size(); ++j) {
            result += (char)tolower((int)word[j]);
        }
    }

    return result;
}

#include <algorithm>
#include <string>
#include <sstream>

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> tokens;
    size_t prev = 0, pos = 0;

    do {
        pos = str.find(c, prev);
        if (pos == std::string::npos) {
            tokens.push_back(str.substr(prev));
            break;
        }

        tokens.push_back(str.substr(prev, pos - prev));

        prev = pos + 1;
    } while (true);

    return tokens;
}

int main() {
    // Test cases
    std::cout << kebabToCamel("nospaceordash") << "\n";
    std::cout << kebabToCamel("two-words") << "\n";
    std::cout << kebabToCamel("two words") << "\n";
    std::cout << kebabToCamel("all separate words") << "\n";

    return 0;
}