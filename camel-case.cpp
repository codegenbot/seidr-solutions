#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (i > 0 && s[i - 1] != ' ') {
                if (!result.empty()) {
                    result[0] = toupper(result[0]);
                }
                result += s.substr(i + 1, 1).toupper() + s.substr(i + 2);
                i++;
            } else {
                int j = i;
                while (j < s.size() && s[j] == '-') {
                    j++;
                }
                if (!result.empty()) {
                    result[0] = toupper(result[0]);
                }
                result += s.substr(i, j - i).toupper();
                i = j - 1;
            }
        } else {
            result += s[i];
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