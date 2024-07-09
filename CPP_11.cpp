```cpp
#include <iostream>
#include <string>

std::string string_xor(std::string &a, std::string &b) {
    std::string result;
    for (int i = 0; i < a.length(); i++) {
        int xored = (a[i] - '0') ^ (b[i] - '0');
        result += (xored % 2 == 0 ? "0" : "1");
    }
    return result;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;
    std::cout << "XOR of two strings is: " << string_xor(str1, str2) << std::endl;
    return 0; 
}