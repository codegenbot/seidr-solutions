#include <string>
#include <sstream>
#include <iostream>

std::basic_string<char> encrypt(std::basic_string<char> s) {
    std::basic_string<char> result = "";  
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
    std::basic_string<char> inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);

    // Now you can call this function:
    std::basic_string<char> encrypted = encrypt(inputStr);
    std::cout << "Encrypted: " << encrypted << std::endl;
}