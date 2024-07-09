```cpp
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

std::string string_to_md5(const std::string& s) {
    // Your implementation here...
}

int main() {
    std::stringstream ss;
    std::string s;
    std::cin >> s;
    for (char c : s) {
        unsigned int md5 = (unsigned int)c;
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md5;
    }
    std::cout << ss.str() << std::endl;
    return 0;
}