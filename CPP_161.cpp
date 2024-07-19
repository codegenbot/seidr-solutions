#include <iostream>
#include <string>

bool solve(std::string s) {
    if (s == "#ccc") {
        return true;
    }
    return false;
}

int originalMain() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    if (solve(s)) {
        std::cout << s << std::endl;
        return 0;
    } else {
        std::cout << "No solution exists" << std::endl;
        return 1;
    }
}

int main() {
    originalMain();
    return 0;
}