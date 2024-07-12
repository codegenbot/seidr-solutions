#include <iostream>
#include <string>

bool is_happy(const std::string& s) {
    for (int i = 0; i <= s.length() - 2; i++) {
        size_t count = std::count(s.begin(), s.end(), s[i]);
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