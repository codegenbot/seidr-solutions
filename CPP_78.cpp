#include <string>

const std::string hex_key_value() {
    std::string num;
    for (char c; std::cin >> c;) {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) {
            num += c;
        }
    }
    return num;
}