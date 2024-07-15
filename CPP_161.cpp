#include <iostream>
#include <algorithm>
#include <cctype>

std::string solve(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    if (std::count_if(s.begin(), s.end(), isalpha) == 0) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << solve(input) << std::endl;
    return 0;
}