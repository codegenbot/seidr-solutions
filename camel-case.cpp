#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool nextWord = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            nextWord = true;
        } else if (nextWord) {
            result += toupper(s[i]);
            nextWord = false;
        } else if (!result.empty() && !std::isalpha(s[i])) {
            result += s[i];
        } else if (std::isalpha(s[i])) {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    std::string input;
    int numConversions = 5; // Set a specific number of iterations
    for (int i = 0; i < numConversions; i++) {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, input);
        std::cout << "camelCase: " << camelCase(input) << std::endl;
    }
    return 0;
}