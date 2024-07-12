```cpp
#include <iostream>
#include <string>

std::string encrypt(const std::string& s) {
    // Implement your encryption logic here.
    return s;  
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::cout << encrypt(s) << std::endl;
    return 0;
}