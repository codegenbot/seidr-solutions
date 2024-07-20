#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (i > 0 && str[i] == '-') {
            result[0] = toupper(result[0]);
            result += " ";
        }
        int j = i + 1;
        while (j < str.length() && str[j] != '-') {
            j++;
        }
        result += str.substr(i, j - i);
        i = j - 1;
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "The camelCase conversion is: " << camelCase(str) << std::endl;
    return 0;
}