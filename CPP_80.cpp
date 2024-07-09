```cpp
#include <string>
#include <cassert>
#include <iostream>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        for (int j = i; j < i + 3; j++) {
            char c = s[j];
            int count = 0;
            for (int k = j; k < j + 3 && k < s.length(); k++) {
                if (s[k] == c)
                    count++;
            }
            if (count > 1) {
                unique = false;
                break;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    if (is_happy(s))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
    return 0;
}