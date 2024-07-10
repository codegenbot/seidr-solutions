#include <iostream>
#include <algorithm>
#include <cctype>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (std::count_if(s.begin(), s.end(), isalpha) == 0) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    std::string test_case = "aBc123";
    std::cout << solve(test_case) << std::endl;

    return 0;
}