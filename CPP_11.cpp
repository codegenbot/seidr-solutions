#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    if (a.length() != b.length()) {
        throw std::invalid_argument("Strings must be of equal length");
    }
    
    std::string result;
    for (int i = 0; i < a.length(); i++) {
        int x1 = a[i] - '0';
        int x2 = b[i] - '0';
        
        if ((x1 ^ x2) > 0)
            result += "1";
        else
            result += "0";
    }
    
    return result;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);

    try {
        std::string result = string_xor(str1, str2);
        std::cout << "XOR of strings is: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}