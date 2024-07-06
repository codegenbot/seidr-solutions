#include <string>
#include <sstream>
#include <iostream>

std::string encrypt(std::string s) {
    std::string result = "";  
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 3) % 26 + 'a';
        } else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 3) % 26 + 'A';
        }
        result += c;  
    }
    return result;
}

int main() {
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);

    // Now you can call this function:
    std::string encrypted = encrypt(inputStr);
    std::cout << "Encrypted: " << encrypted << std::endl;
}