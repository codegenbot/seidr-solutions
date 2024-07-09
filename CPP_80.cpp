```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        char c1 = s[i];
        char c2 = s[i + 1];
        char c3 = s[i + 2];
        for (int j = i; j < s.length(); j++) {
            if (s[j] == c1)
                continue;
            else if (s[j] == c2)
                continue;
            else if (s[j] == c3)
                continue;
            else
                break;
        }
        if ((s.find(c1) != std::string::npos && s.find(c1, i + 1) != std::string::npos) ||
            (s.find(c2) != std::string::npos && s.find(c2, i + 1) != std::string::npos) ||
            (s.find(c3) != std::string::npos && s.find(c3, i + 1) != std::string::npos))
            return false;
    }
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s); 
    if (is_happy(s))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
}