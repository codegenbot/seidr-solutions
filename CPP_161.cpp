#include <iostream>
#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += std::toupper(c) - ('A' - 'a') + ('A' <= c && c <= 'Z');
            //result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(result.rbegin(), result.rend()) : result;
}

int main() {
    std::string str = "Hello, World!";
    std::cout << solve(str) << std::endl;
    return 0;
}