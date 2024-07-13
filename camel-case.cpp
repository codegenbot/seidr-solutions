#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            continue; // don't process '-'
        } else if (capitalize) {
            result += toupper(c);
            capitalize = true;
        } else {
            result += tolower(c);
            capitalize = true;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (!word.empty()) {
            result += camelCase(word + " ");
        }
    }

    std::cout << result.substr(0, result.size() - 1) << std::endl;

    return 0;
}