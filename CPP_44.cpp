#include <iostream>
#include <string>
#include <cassert>

// Function prototype declaration
std::string change_base(int num, int base);

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}

// Function definition
std::string change_base(int num, int base) {
    // Add your implementation here
    return "placeholder for implementation";
}