#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> words;
    std::string word;

    for (char cstr : str) {
        if (cstr == c) {
            words.push_back(word);
            word.clear();
        } else {
            word += cstr;
        }
    }

    words.push_back(word);

    return words;
}

std::string capitalizeFirst(const std::string& str) {
    std::string result = tolower(str);
    if (!result.empty()) {
        result[0] = toupper(result[0]);
    }
    return result;
}

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    std::vector<std::string> words = split(str, ' ');
    for (const auto& word : words) {
        if (!result.empty()) {
            result += capitalizeFirst(word);
        } else {
            result = capitalizeFirst(word);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;

    std::cout << "CamelCase conversion: " << kebabToCamel(input) << std::endl;

    return 0;
}