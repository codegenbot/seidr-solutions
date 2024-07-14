#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // skip the hyphen
            if (i < str.length()) { // check if we're not at the end of the string
                result += std::toupper(str[i]);
            }
        } else if (!result.empty() && !std::isupper(str[i])) { // first letter of each word should be in uppercase
            result[0] = std::tolower(result[0]); // convert to lowercase
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}