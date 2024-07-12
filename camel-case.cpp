#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string word;

    while (iss >> word) {
        word[0] = toupper(word[0]);
        for (auto i = 1; i < word.size(); ++i) {
            word[i] = tolower(word[i]);
        }
        input.erase(0, iss.str().find(word) + word.size());
    }

    std::cout << camelCase(input) << std::endl;

    return 0;
}