#include <iostream>
#include <string>

int hex_key(const std::string& str) {
    int result = 0;
    for (char c : str) {
        if (std::isxdigit(std::toupper(c))) { 
            result++;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    int key = hex_key(str);
    std::cout << "Number of hexadecimal digits: " << key << std::endl;
    return 0;
}