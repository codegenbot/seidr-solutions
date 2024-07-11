#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    size_t start = 0;

    // Split string into words using '-' as delimiter
    while (start < str.size()) {
        size_t end = str.find('-', start);
        if (end == std::string::npos) {
            words.push_back(str.substr(start));
            break;  // Last group of words, no need to search for '-'
        }
        words.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    // Convert each word to camelCase
    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += std::toupper(words[i].at(0));  // First letter of the first word is uppercase, others are lowercase
        } else {
            result += words[i];
        }
        if (i < words.size() - 1) {
            result += words[i + 1];
        }
    }

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, str);
        std::cout << "CamelCase conversion: " << camelCase(str) << std::endl;
    }
    return 0;
}