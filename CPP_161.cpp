#include <iostream>
#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(s).reverse() : result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    // Add your code here
}