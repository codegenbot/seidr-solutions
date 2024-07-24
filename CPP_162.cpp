```cpp
#include <iostream>
#include <iomanip>
#include <bitset>

std::string string_to_md5(const std::string& str) {
    // Implement your MD5 calculation here
    return "md5_value";
}

int main() {
    const char* md[] = {"your_md_values"};
    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }
    return 0;
}