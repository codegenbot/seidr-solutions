#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::vector<std::string> words;
    size_t pos = 0;
    while ((pos = input.find '-') != std::string::npos) {
        words.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    words.push_back(input);

    std::string output;
    for (const auto& word : words) {
        if (!output.empty()) {
            output += char(std::toupper(word[0]));
        } else {
            output = word;
        }
        for (size_t i = 1; i < word.size(); ++i) {
            output += char(std::tolower(word[i]));
        }
    }
    return output;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, input);
        if (input == "nospaceordash") break; // stop when user enters specific input
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}