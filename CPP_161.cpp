#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

std::string solve(const std::string &s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }

    if (std::count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        std::reverse(s.begin(), s.end());
    }

    return s;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::string result = solve(input);

    std::cout << "Result: " << result << std::endl;

    return 0;
}