```cpp
#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    std::string result = "";
    for(int i=0; i<a.length(); i++) {
        if(a[i] == '1' && b[i] == '1' || a[i] == '0' && b[i] == '0') 
            result += '0';
        else
            result += '1';
    }
    return result;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first binary string: ";
    std::cin >> str1;
    std::cout << "Enter the second binary string: ";
    std::cin >> str2;
    
    std::string output = string_xor(str1, str2);
    std::cout << "The XOR of the two strings is: " << output << std::endl;
    
    return 0;
}