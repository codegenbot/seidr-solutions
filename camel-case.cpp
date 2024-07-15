#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::vector<std::string> words = split(input, " ");
    std::string result;

    for (const auto& word : words) {
        if (!result.empty()) {
            result[0] = toupper(word[0]);
        } else {
            result += tolower(word);
        }
        for (int i = 1; i < word.size(); ++i) {
            result += tolower(word[i]);
        }
    }

    return result;
}

std::string split(const std::string& input, const char* delimiter) {
    std::vector<std::string> words;
    size_t pos = 0;

    while ((pos = input.find(delimiter)) != std::string::npos) {
        words.push_back(input.substr(0, pos));
        input.erase(0, pos + strlen(delimiter));
    }

    words.push_back(input);
    return words.empty() ? "" : words[0];
}

int main() {
    // Test cases
    std::cout << kebabToCamel("nospaceordash") << std::endl;
    std::cout << kebabToCamel("two-words") << std::endl;
    std::cout << kebabToCamel("two words") << std::endl;
    std::cout << kebabToCamel("all separate words") << std::endl;

    return 0;
}