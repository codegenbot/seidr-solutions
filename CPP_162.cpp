```cpp
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "MD5 hash: " << md5(input) << std::endl;
    return 0;
}