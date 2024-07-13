```cpp
#include <string>
#include <cctype>
#include <iostream>
#include <vector>

std::string camelCase(std::string str) {
    std::string result = "";
    std::vector<std::string> words;
    size_t pos = 0;

    // Split input string by "-"
    while ((pos = str.find("-")) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }

    if (!str.empty()) {
        words.push_back(str);
    }

    for (const auto& word : words) {
        if (result.empty()) {
            result = std::string{1, std::toupper(word[0])} + word.substr(1);
        } else {
            result += " " + std::string{1, std::tolower(word[0])} + std::string{word.begin() + 1, word.end()}.toupper();
        }
    }

    return result;
}

int main() {
    if (std::cin.fail()) {
        std::cerr << "Error: Invalid input." << std::endl;
        return 1;
    }

    std::string input;
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;

    return 0;
}