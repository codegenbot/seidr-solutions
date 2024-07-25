Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            result += c;
        } else if (c == ' ') {
            result += c;
        } else {
            if (!result.empty() && isupper(c)) {
                result[0] = tolower(result[0]);
                result.insert(1, 1, toupper(c));
            } else {
                result += c;
            }
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