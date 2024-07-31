#include <string>
#include <iostream>

const int hex_key_value() {
    std::string num;
    int result = 0;
    for (char c; std::cin >> c;) {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) {
            num += c;
            result = (result << 4) + (num.back() >= '7' ? (num.back() - '7' + 10) * 16 : (num.back() - '0'));
            num.pop_back();
        }
    }
    return result;
}