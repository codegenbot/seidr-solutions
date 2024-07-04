#include <iostream>
#include <string>
#include <cassert>

int my_strlen(const std::string& str) {
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 9);
    std::string input_str;
    std::cout << "Enter a string: ";
    std::cin >> input_str;
    std::cout << "Length of the string is: " << my_strlen(input_str) << std::endl;
    return 0;
}