#include <iostream>
#include <cassert>
#include <string>

std::string change_base(long long a, long long b) {
    return std::to_string(static_cast<long long>(a) / static_cast<long long>(b));
}

int main() {
    long long x = 10;
    assert(change_base(x, x + 1) == std::to_string(static_cast<long long>(x) / static_cast<long long>(x + 1)));
    return 0;
}