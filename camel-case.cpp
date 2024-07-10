#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result != "") {
                result[0] = toupper(result[0]);
            }
            int j = i + 1;
            while (j <= str.length() && str[j] != '-') {
                result += tolower(str[j++]);
            }
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << camelCase(input) << std::endl;
    return 0;
}