```cpp
#include <iostream>
#include <string>
#include <algorithm>

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
    assert (solve("#ccc") == 1);
    return 0;
}