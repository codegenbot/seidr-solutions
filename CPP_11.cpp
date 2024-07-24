#include <iostream>
#include <string>
#include <cassert>

std::string string_xor(std::string a, std::string b) {
    std::string result = "";
    for (std::size_t i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    return 0;
}