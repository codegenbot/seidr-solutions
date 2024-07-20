#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == '-') {
            if (result.size()) {
                result[0] = toupper(result[0]);
            }
            int j = i + 1;
            while (j < str.size() && str[j] != '-') {
                result += tolower(str[j++]);
            }
            if (!result.size()) {
                result = str.substr(i);
            } else {
                result += " ";
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase version is: " << camelCase(input) << std::endl;
    return 0;
}