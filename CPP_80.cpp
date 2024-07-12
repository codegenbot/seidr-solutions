```
#include <iostream>
#include <string>
#include <algorithm>

bool is_happy(const std::string& s) {
    for (int i = 0; i <= s.length() - 2; i++) {
        size_t count = std::count_if(s.begin(), s.end(), [&](char c){return c == s[i];});
        if (count > 1)
            return false;
    }
    return true;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    if (input == "exit")
        return 0;
    std::cout << (is_happy(input) ? "True" : "False") << std::endl;
    return 0;
}