```cpp
#include <sstream>
#include <iomanip>

std::stringstream ss;

void string_to_md5(const std::string& str) {
    std::vector<char> md5(16);
    for (int i = 0; i < 16; i++) {
        int val = ((int)str[i]) % 256;
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)val;
    }
    ss.str(""); // Reset the stringstream
}