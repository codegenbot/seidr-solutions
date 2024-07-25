#include <string>
#include <iostream>
#include <cassert>

using std::to_string;

std::string change_base(int x, int base) {
    std::string result = "";
    while(x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == "10");
    return 0;
}