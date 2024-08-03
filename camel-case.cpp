#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    size_t pos = 0;

    while (pos < s.length()) {
        // Find the next space or dash
        size_t nextSpaceOrDash = s.find(' ', pos);
        if (nextSpaceOrDash == std::string::npos) {
            nextSpaceOrDash = s.find('-', pos);
        }

        if (nextSpaceOrDash != std::string::npos) {
            // Add the current word to the result
            for (size_t i = pos; i < nextSpaceOrDash; ++i) {
                result += toupper(s[i]);
            }
            result.push_back(' ');
            pos = nextSpaceOrDash + 1;
        } else {
            // Add the remaining words to the result
            for (size_t i = pos; i < s.length(); ++i) {
                result += tolower(s[i]);
            }
            break;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << toCamelCase(input) << std::endl;
    return 0;
}