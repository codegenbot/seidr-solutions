#include <iostream>
#include <string>

std::string encrypt(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 2*2) % 26 + 'a';
        } else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 2*2) % 26 + 'A';
        }
        result += c;
    }
    return result;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Encrypted String: " << encrypt(input) << std::endl;
    return 0;
}