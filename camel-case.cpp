#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (i > 0 && str[i - 1] != ' ') {
                result += toupper(str[i + 1]);
                i++;
            } else {
                int j = i;
                while (j < str.length() && str[j] == '-') {
                    j++;
                }
                result += str.substr(i + 1, j - i - 1);
                i = j;
            }
        } else if (str[i] != ' ') {
            result += tolower(str[i]);
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += str.substr(i, str.find(' ', i) - i);
            i = str.find(' ', i) - 1;
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        if (!str.empty()) {
            std::cout << camelCase(str) << std::endl;
        }
    }
    return 0;
}