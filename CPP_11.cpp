```cpp
#include <iostream>
#include <string>
#include <stdexcept>

std::string string_xor(std::string a, std::string b) {
    if(a.length() != b.length())
        throw std::invalid_argument("Input strings must have the same length.");

    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        int x = (a[i] - '0');
        int y = (b[i] - '0');
        int res = x ^ y;
        result += res == 1 ? "1" : "0";
    }
    return result;
}

int main() { 
    assert(string_xor("0101", "0000") == "0101");
    
    std::string str1, str2;
    while (true) {
        std::cout << "Enter the first string: ";
        if (!(std::getline(std::cin, str1))) break;
        std::cout << "Enter the second string: ";
        if (!(std::getline(std::cin, str2))) break;
        
        try {
            std::string result = string_xor(str1, str2);
            std::cout << "XOR of the two strings is: " << result << std::endl;
            break;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    return 0;
}