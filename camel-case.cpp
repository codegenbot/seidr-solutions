#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result != "") {
                result[0] = toupper(result[0]);
            }
            int j = i;
            while (j < str.length() && str[j] != '-' && str[j] != ' ') {
                j++;
            }
            result += str.substr(i, j - i);
            i = j;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "The camelCase equivalent is: " << camelCase(str) << std::endl;
    return 0;
}