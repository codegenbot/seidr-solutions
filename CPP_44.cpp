#include <string>
#include <cassert>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    assert(change_base(12, 2) == "110");
    assert(change_base(20, 8) == "24");
    return 0;
}