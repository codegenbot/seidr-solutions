```cpp
#include <cassert>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        std::string subStr = s.substr(i, 1); 
        size_t pos = s.find(subStr);
        while (pos != std::string::npos) {
            if (s.length() < i + 3)
                return false;
            pos = s.find(subStr, pos+1); 
        }
    }
    return true;
}

int main(void) {
    assert(is_happy("iopaxioi") == false);
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    if (is_happy(s))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
}