#include <iostream>
#include <algorithm>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::cout << solve(input) << std::endl;

    return 0;
}