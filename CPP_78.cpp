#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    int result = 0; 
    for (char c : str) {
        if (std::isxdigit(std::toupper(c))) { 
            result++;
        }
    }
    std::cout << "Number of hexadecimal digits: " << result << std::endl;
    return 0;
}