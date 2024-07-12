```cpp
#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    std::string result;
    for (int i = 0; i < a.length(); i++) {
        char c = (a[i] - '0' ^ b[i] - '0') + '0';
        result += c;
    }
    return result;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first binary string: ";
    std::cin >> str1;
    std::cout << "Enter the second binary string: ";
    std::cin >> str2;
    
    if (str1.length() != str2.length()) {
        std::cout << "Error: Both strings must have the same length." << std::endl;
        return 1; 
    }
    
    std::string result = string_xor(str1, str2);
    std::cout << "XOR of given binary strings is: " << result << std::endl;

    return 0;
}