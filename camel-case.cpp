#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(std::string input) {
    std::vector<std::string> words = {""};
    for (char c : input) {
        if (c == '-') {
            words.back().pop_back();
            words.push_back("");
        } else {
            words.back() += c;
        }
    }

    std::string output = "";
    for (std::string word : words) {
        if (!word.empty()) {
            output += std::toupper(word[0]);
            output += word.substr(1).substr(0).toLowerCase();
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << toCamelCase(input) << "\n";
    return 0;
}