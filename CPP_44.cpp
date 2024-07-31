#include <string>
#include <cassert>

std::string change_base(int x, int base) {
    assert(base > 1);
    assert(x >= 0);

    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    // Add test cases here if required
    return 0;
}