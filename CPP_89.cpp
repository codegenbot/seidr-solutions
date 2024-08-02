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
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Encrypted string: " << encrypt(str) << std::endl;
    return 0;
}