#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.size() > 0) {
                result[0] = toupper(result[0]);
            }
            int j = i + 1;
            while (j < s.size() && s[j] != '-') {
                result += tolower(s[j++]);
            }
            i = j;
        } else {
            if (result.size() > 0) {
                result[0] = toupper(result[0]);
            }
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}