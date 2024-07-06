#include <iostream>
#include <sstream>

std::string encrypt(std::istringstream s);

int main() {
    std::string inputStr;
    std::getline(std::cin, inputStr);
    std::istringstream in(inputStr);  

    std::string result = "";  
    for(int i=0; i<s.str().length(); i++){
        char c = s.str()[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 3) % 26 + 'a';
        } else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 3) % 26 + 'A';
        }
        result += c;  
    }

    std::string encrypted = encrypt(in);
    std::cout << "Encrypted: " << encrypted << std::endl;
}

std::string encrypt(std::istringstream s) {
    std::string result = "";  
    for(int i=0; i<s.str().length(); i++){
        char c = s.str()[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 3) % 26 + 'a';
        } else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 3) % 26 + 'A';
        }
        result += c;  
    }
    return result;
}