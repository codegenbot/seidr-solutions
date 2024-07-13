```c++
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::string camelCase(std::string& str) {
    std::vector<std::string> words;
    std::string temp;

    for (char c : str) {
        if (c == '-' || c == ' ') {
            if (!temp.empty()) {
                words.push_back(temp);
                temp.clear();
            }
        } else {
            temp += tolower(c);
        }
    }

    if (!temp.empty()) {
        words.push_back(temp);
    }

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += toupper(words[i][0]);
        } else {
            result += words[i];
        }
        if (i < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}