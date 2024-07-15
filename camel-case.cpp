#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::vector<std::string> words;
    if (input.find(' ') != std::string::npos) {
        size_t pos = 0;
        while ((pos = input.find(' ')) != std::string::npos) {
            words.push_back(input.substr(0, pos));
            input.erase(0, pos + 1);
        }
    } else {
        words.push_back(input);
    }

    if (!input.empty()) {
        for (size_t i = 0; i < words.size(); ++i) {
            if (i > 0)
                words[i][0] = toupper(words[i][0]);
        }
    }

    std::string output;
    for (const auto& word : words) {
        output += word;
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}