#include <string>
#include <iostream>
#include <cassert>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(int argc, char* argv[]) {
    int x = 42;
    assert(std::to_string(x) == change_base(x, x + 1));
    return 0;
}