#include <iostream>
#include <algorithm>
#include <string>

std::string solve(const std::string& s);

std::string solve(const std::string& s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    std::cout << solve("#ccc") << std::endl;
    return 0;
}