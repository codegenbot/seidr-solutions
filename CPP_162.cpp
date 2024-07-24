```cpp
#include <iostream>
#include <string>
#include <md5.h>
#include <iomanip>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "MD5 hash: " << md5(input) << std::endl;
    return 0;
}

std::string md5(const std::string& str) {
    std::stringstream ss;
    ss << std::hex << std::setw(8);
    for (char c : str) {
        ss << std::setfill('0') << std::right << std::setw(2)
           << std::hex << static_cast<int>(c);
    }
    return ss.str();
}