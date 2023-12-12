#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string result;
    std::vector<std::string> words;
    size_t start = 0;
    size_t end = input.find(' ');

    // Split the input string into individual words
    while (end != std::string::npos) {
        std::string word = input.substr(start, end - start);
        words.push_back(word);
        start = end + 1;
        end = input.find(' ', start);
    }
    words.push_back(input.substr(start));

    // Convert each word to camelCase
    for (size_t i = 0; i < words.size(); ++i) {
        std::string word = words[i];
        size_t pos = 0;

        // Remove '-' characters and convert the first character to uppercase
        while ((pos = word.find('-')) != std::string::npos) {
            word.erase(pos, 1);
            word[pos] = std::toupper(word[pos]);
        }

        // Convert the first character of the word to lowercase
        word[0] = std::tolower(word[0]);

        // Append the converted word to the result string
        result += word;

        // Add a space between words, except for the last word
        if (i != words.size() - 1) {
            result += ' ';
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