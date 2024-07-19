```cpp
#include <iostream>
#include <string>
#include <algorithm>

int solve(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == '#') {
            count++;
        }
    }
    return count;
}

static int originalMain() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    if (solve(s)) {
        std::cout << s << std::endl;
    } else {
        std::cout << "No solution exists" << std::endl;
    }
}

int main() {
    originalMain();
    assert (solve("#ccc") == 3);
    return 0;
}