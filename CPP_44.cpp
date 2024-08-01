#include <string>
#include <cassert>

std::string change_base(int num, int base) {
    std::string result;
    while (num) {
        result = std::to_string(num % base) + result;
        num /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}