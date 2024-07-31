#include <string>
#include <iostream>

int hex_key(const std::string& str) {
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

int main() {
    assert(hex_key("") == 0);
}