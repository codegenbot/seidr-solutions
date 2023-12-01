#include <string>
#include <cassert>

std::string to_string(int n) {
    std::string str = "";
    if (n == 0) {
        return "0";
    }
    while (n > 0) {
        char digit = '0' + (n % 10);
        str = digit + str;
        n /= 10;
    }
    return str;
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