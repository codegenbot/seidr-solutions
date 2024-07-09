```cpp
#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    std::string result(a.length(), '0');
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result[i] = '1';
        }
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    return 0;
}