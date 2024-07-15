#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (result != "") {
                result += result[0];
                for (int j = 1; j < result.length(); j++)
                    result[j] = toupper(result[j]);
            }
            result += " ";
        } else if (str[i] == ' ') {
            if (result != "") {
                result[0] = toupper(result[0]);
            }
            result += str.substr(i + 1);
            break;
        } else {
            if (i > 0 && str[i - 1] == '-') {
                result += " ";
            }
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "The camelCase representation is: " << camelCase(str) << std::endl;
    return 0;
}