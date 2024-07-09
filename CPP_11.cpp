```cpp
#include <iostream>
#include <string>

std::string string_xor(const std::string &a, const std::string &b) {
    std::string result;
    int len = a.size();
    for (int i = 0; i < len; i++) {
        int xored = (a[i] - '0') ^ (b[i] - '0');
        result += (xored % 2 == 0 ? "0" : "1");
    }
    // handle the case where a or b is shorter than result
    for (int i = len; i < std::max(a.size(), b.size()); i++) {
        if (a.size() > b.size()) {
            xored = (a[i] - '0');
        } else {
            xored = (b[i] - '0');
        }
        result += (xored % 2 == 0 ? "0" : "1");
    }
    return result;
}

int main() {
    std::cout << string_xor("0101", "0000") << std::endl;
    return 0; 
}