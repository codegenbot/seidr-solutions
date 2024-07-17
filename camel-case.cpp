#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.size()) {
                result[0] = toupper(result[0]);
            }
            int j = i + 1;
            while (j < s.size() && s[j] == '-') {
                j++;
            }
            result += s.substr(i, j - i);
            i = j - 1;
        }
    }
    return result;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << camelCase(s) << std::endl;
    return 0;
}