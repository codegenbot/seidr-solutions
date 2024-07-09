#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cassert>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        std::string subStr = s.substr(i, 3); 
        size_t pos = s.find(subStr);
        while (pos != std::string::npos) {
            if (s.length() < i + 3) return false;
            pos = s.find(subStr, pos);
        }
    }
    return true;
}

bool originalMain() {
    assert(is_happy("iopaxioi") == false);
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s); 
    if (is_happy(s))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
}

int main() {
    originalMain();
    return 0;
}