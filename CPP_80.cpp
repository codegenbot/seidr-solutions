```
#include <iostream>
#include <string>

bool is_happy(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if (c >= 'a' && c <= 'f') {
            sum += (c - 'a' + 1);
        }
    }
    return sum == 9 || sum == 18 || sum % 19 == 0;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    if (is_happy(s))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
}