#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] == '-') i++;
            if (i < str.length()) {
                result += toupper(str[i]);
                i++;
            }
        } else if (!result.empty() && isalpha(str[i])) {
            result[0] = tolower(result[0]);
            result.insert(0, 1);
        } else {
            if (str[i] == ' ') {
                str.erase(i, 1);
                i--;
            } else {
                if (!result.empty()) {
                    result[0] = tolower(result[0]);
                    result.insert(0, " ");
                }
                result += toupper(str[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> str;
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}