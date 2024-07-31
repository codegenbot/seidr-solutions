#include <string>
#include <iostream>
#include <cassert>

int stringToHex(const std::string& s) {
    int result = 0;
    int hex_key = 1;
    for (char c : s) {
        if (isdigit(c)) {
            result = result * 16 + (c - '0');
        } else if (isupper(c)) {
            result = result * 16 + (c - 'A' + 10);
        }
        hex_key *= 16;
    }
    return result;
}

int main() {
    assert(stringToHex("") == 0);
    return 0;
}