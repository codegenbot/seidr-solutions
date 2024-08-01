#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) return s;
    std::string result = s[0] >= 'a' && s[0] <= 'z'? s.substr(0, 1) : s.substr(0, 1);
    for (int i = 1; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            result += toupper(s[i]);
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> arr;
    std::string temp;

    for (char const &c : str) {
        if (c == c) {
            temp += c;
        } else {
            if (!temp.empty()) {
                arr.push_back(temp);
                temp = "";
            }
        }
    }

    if (!temp.empty()) {
        arr.push_back(temp);
    }

    return arr;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::vector<std::string> words = split(input, ' ');
    std::string result;

    for (const auto& word : words) {
        if (!word.empty()) { // Ignore empty strings
            if (!result.empty()) {
                result += capitalize(word.substr(1)); // Add capitalized word to result
            } else {
                result = capitalize(word); // First word, all caps
            }
        }
    }

    std::cout << result << std::endl;

    return 0;
}