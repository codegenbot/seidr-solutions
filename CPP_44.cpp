#include <string>
#include <cassert>

std::string to_string(int x) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % 10;
        result = std::to_string(remainder) + result;
        x = x / 10;
    }
    return result;
}

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x = x / base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == to_string(x));
    return 0;
}