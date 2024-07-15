#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || (input[i] == '-' && input[i - 1] != ' ')) {
            if (start < i) {
                output += std::string(1, (input[start] >= 'a' && input[start] <= 'z') ? std::tolower(input[start]) : std::toupper(input[start]));
                for (size_t j = start + 1; j < i; ++j) {
                    if (input[j] == '-') {
                        start = j;
                        continue;
                    }
                    output += input[j];
                }
            }
            if (i < input.size()) {
                if (start >= i || input[i] != '-') {
                    output.push_back((input[i] >= 'a' && input[i] <= 'z') ? std::tolower(input[i]) : std::toupper(input[i]));
                    start = i + 1;
                } else {
                    start = i + 1;
                }
            } else {
                return output;
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