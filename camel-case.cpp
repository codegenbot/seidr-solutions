Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string result = "";
    for (int i = 0; i <= input.size(); i++) {
        if (i == input.size() || input[i] == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            if (i < input.size()) {
                result += tolower(input.substr(i));
                i += input.find(' ', i) - 1;
            }
        } else {
            if (result.empty()) {
                result = tolower(std::string(1, input[i]));
            } else {
                result += tolower(std::string(1, input[i]));
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}