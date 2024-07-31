#include <string>
#include <iostream>

int hex_to_int(const std::string& s) {
    int result = 0;
    for (char c : s) {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) {
            result = (result << 4) + (c >= '7' ? (c - '7' + 10) * 16 : (c - '0'));
        }
    }
    return result;
}