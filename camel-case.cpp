#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // skip the '-'
            while (i < str.length() && str[i] == '-') i++;
            if (i < str.length()) {
                result += toupper(str[i]);
                i++; // skip the first char of the next word
            }
        } else if (!result.empty() && isalpha(str[i])) {
            result += tolower(str[i]);
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
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