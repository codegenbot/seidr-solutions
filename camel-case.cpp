#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || (input[i] == '-' && (i == 0 || input[i - 1] != '-'))) {
            if (start < i) {
                output += std::string(input.substr(start, i - start));
                start = i + 1;
            } else {
                if (start < i) {
                    output += std::string(std::toupper(input[start]));
                    start++;
                }
                while (start < i) {
                    output.push_back(std::tolower(input[start++]));
                }
            }
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}