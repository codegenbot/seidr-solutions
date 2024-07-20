```cpp
#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + 2 * 26 - 2) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + 2 * 26 - 2) % 26 + 'A';
        }
        result += c;
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}