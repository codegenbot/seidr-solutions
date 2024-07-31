#include <string>
#include <iostream>
#include <cassert>

int hex_to_int(std::string s) {
    int result = 0;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            result = result * 16 + (c - '0');
        } else if (c >= 'A' && c <= 'F') {
            result = result * 16 + (c - 'A' + 10);
        } else if (c >= 'a' && c <= 'f') {
            result = result * 16 + (c - 'a' + 10);
        }
    }
    return result;
}

int main() {
    assert(hex_to_int("") == 0);
    return 0;
}