#include <string>
#include <iostream>
#include <cassert>
#include <cstdlib>

using std::to_string;

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 42;
    assert(change_base(x, x + 1) == to_string(x));
    return 0;
}