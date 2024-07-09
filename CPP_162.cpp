```cpp
#include <iostream>
#include <sstream>
#include <algorithm>

std::string string_to_md5(const std::string& str) {
    // Implement your md5 algorithm here
    // For simplicity, I'll just return the original string as MD5 sum
    return str;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::stringstream ss;
    for (char c : string_to_md5(s)) {
        ss << std::setfill('0') << std::setw(2) << std::hex << (int)c;
    }
    std::cout << "MD5 sum: " << ss.str() << "\n";
    return 0;
}