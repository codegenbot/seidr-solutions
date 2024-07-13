#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.size() && str[i] == '-') i++;
            if (i < str.size()) {
                result += toupper(str[i]);
                while (i + 1 < str.size() && str[i+1] != ' ') i++;
            }
        } else if (!result.empty() && isalpha(str[i])) {
            result[0] = tolower(result[0]);
            return result;
        } else {
            if (!result.empty()) result += (' ');
            while (i < str.size() && !isalpha(str[i])) i++;
            if (i < str.size()) {
                result += tolower(str[i]);
                while (i + 1 < str.size() && isalpha(str[i+1])) i++;
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    std::cout << camelCase(str) << std::endl;
    return 0;
}