```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    int pos = 0;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        char c1 = s[i];
        char c2 = s[i + 1];
        char c3 = s[i + 2];
        for (int j = 0; j < 3 && pos < i + 3; ++j) {
            if (s[pos++] != c1 || s[pos - 1] == c2 || s[pos - 2] == c3)
                break;
        }
        if (pos >= s.length() || s[pos] != c1 || s[pos - 1] == c2 || s[pos - 2] == c3)
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