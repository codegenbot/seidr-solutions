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
            result.insert(0, 1, str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}