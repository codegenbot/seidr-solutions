#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string result;
    std::vector<std::string> words;

    // Split the input string by spaces
    size_t start = 0;
    size_t end = input.find(" ");
    while (end != std::string::npos) {
        words.push_back(input.substr(start, end - start));
        start = end + 1;
        end = input.find(" ", start);
    }
    words.push_back(input.substr(start));

    // Convert each word to camelCase
    for (const std::string& word : words) {
        size_t dash = word.find("-");
        if (dash != std::string::npos) {
            result += word.substr(0, dash);
            result += std::toupper(word[dash + 1]);
            result += word.substr(dash + 2);
        } else {
            result += word;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = convertToCamelCase(input);
    std::cout << output << std::endl;

    return 0;
}