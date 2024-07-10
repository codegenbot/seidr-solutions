```cpp
#include <iostream>
#include <string>
#include <cctype>

int solve(std::string s) {
    for (char& c : s) {
        c = std::tolower(c);
    }
    return s.length();
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    std::cout << solve(s) << std::endl;
    int userInput() {
        assert(solve("#ccc") == 3);
        return 0;
    }
    return 0;
}