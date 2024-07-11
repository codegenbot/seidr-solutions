#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::vector<std::string> words = {input};
    if (words[0].find(' ') != std::string::npos) {
        words = {input.substr(0, input.find(' ')), input.substr(input.find(' ') + 1)};
    }

    std::string output;
    bool capitalizeNextWord = true;

    for (const auto& word : words) {
        if (!word.empty()) {
            if (capitalizeNextWord) {
                output += word[0] >= 'a' && word[0] <= 'z' ? toupper(word[0]) : tolower(word[0]);
                capitalizeNextWord = false;
            } else {
                output += word;
            }
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase conversion is: " << camelCase(input) << std::endl;

    return 0;
}