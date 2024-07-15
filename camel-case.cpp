Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            result += s.substr(i + 1, 1).toupper();
            i++;
        } else if (s[i] != ' ') {
            if (result.length() > 0) {
                result[0] = toupper(result[0]);
            }
            result += s[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << '\n';
    }
    return 0;
}