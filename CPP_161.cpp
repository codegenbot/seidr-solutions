#include <iostream>
#include <string>
#include <algorithm>

std::string solve(const std::string& s) {
    for (char &c : s) {
        if (std::isalpha(c)) {
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
        }
    }
    if (std::count_if(s.begin(), s.end(), std::isalpha) == 0) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    std::string test_case1 = "Hello123";
    std::string test_case2 = "12345";
    
    std::cout << solve(test_case1) << std::endl;
    std::cout << solve(test_case2) << std::endl;
    
    return 0;
}