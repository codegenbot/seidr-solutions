#include <string>
#include <iostream>

int hex_key(std::string num = "") {
    std::cout << "Enter hexadecimal key: ";
    
    int count = 0;
    for (int i = 0; i < num.length(); i++) { 
        if (((num[i] >= '0' && num[i] <= '9') || (num[i] >= 'A' && num[i] <= 'F')) || (num[i] >= 'a' && num[i] <= 'f')) {
            count++;
        }
    }
    
    return count;
}