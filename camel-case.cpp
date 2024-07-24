#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || (s[i] == '-' && s[i + 1] != '-')) {
            if (result.size()) {
                result[0] = toupper(result[0]);
            }
            int j = i;
            while (j > 0 && s[j - 1] == '-') {
                j--;
            }
            result += s.substr(j, i - j).substr(1);
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << camelCase(str) << std::endl;
    return 0;
}