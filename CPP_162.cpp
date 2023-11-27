#include <iostream>

int main() {
    std::string input;
    std::cin >> input;
    std::string md5 = string_to_md5(input);
    std::cout << md5 << std::endl;
    return 0;
}