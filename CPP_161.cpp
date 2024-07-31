#include <iostream>
#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += toupper(islower(c))? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::cout << "Result: " << solve(str) << "\n";

    return 0;
}