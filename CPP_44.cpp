#include <string>
#include <cassert>
#include <iostream>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x = x / base;
    }
    return result;
}

int contest_code() {
    int x;
    std::cin >> x;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}