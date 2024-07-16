Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    for (const auto& word : s.split(" ")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        for (char c : word) {
            if (c == '-') {
                continue;
            }
            result += tolower(c);
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