```cpp
#include <iostream>
#include <string>

std::string string_xor(const std::string& a, const std::string& b) {
    std::string result;
    for (int i = 0; i < a.size(); ++i) {
        if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    assert(string_xor("010", "110") == "100");
    assert(string_xor("010", "111") == "101");
    assert(string_xor("010", "000") == "010");
    return 0;
}
```