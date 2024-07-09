```cpp
#include <iostream>
#include <string>

int custom_str_len(std::string str){
    return str.length();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Length of the string is: " << custom_str_len(input) << "\n";
    return 0;
}