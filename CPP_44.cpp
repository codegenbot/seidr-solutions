#include <string>
#include <iostream>
#include <cassert> // add this line

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

void solve_problem() {
    int x = 42;
    int base = x + 1;
    
    if (base != 0 && x >= 0) {
        std::string result = change_base(x, base);
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cout << "Invalid input!" << std::endl;
    }
}

void contest_main() {
    solve_problem();
}

int main() {
    contest_main();
    assert(change_base(42, 43) == std::to_string(42)); // add this line
    return 0;
}