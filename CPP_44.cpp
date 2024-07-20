#include <iostream>
#include <cassert>
#include <string>

std::string change_base(int a, int b) {
    return std::to_string(static_cast<long long>(a) % b);
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(static_cast<long long>(x) % (x + 1)));
    return 0;
}