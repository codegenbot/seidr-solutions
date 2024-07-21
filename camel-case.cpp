#include <iostream>
#include <string>

std::string toCamelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            result += (result.size() > 0) ? ((char)toupper(result[result.size()-1])) : ' ';
        } else if (c == ' ') {
            result += '-';
        } else {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << toCamelCase(input) << std::endl;
    return 0;
}