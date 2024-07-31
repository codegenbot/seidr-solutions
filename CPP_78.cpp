#include <string>
#include <iostream>
#include <cassert>

int hex_to_int(const std::string& s) {
    int result = 0;
    for (char c : s) {
        if (isdigit(c)) {
            result = result * 16 + (c - '0');
        } else if (isupper(c)) {
            result = result * 16 + (c - 'A' + 10);
        }
    }
    return result;
}

int main() {
    assert(hex_to_int("") == 0);
    return 0;
}