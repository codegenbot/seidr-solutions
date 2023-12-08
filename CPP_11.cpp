```
#include <iostream>
#include <string>
#include <bitset>

std::string string_xor(const std::string& a, const std::string& b) {
    return (std::bitset<8>(a) ^ std::bitset<8>(b)).to_string();
}
```