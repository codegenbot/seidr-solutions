```cpp
#include <iostream>
#include <string>

std::string encrypt(std::string s){
    std::string result = "";
    for(int i=0; i<s.size(); i++){
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

int main(){
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin,s);
    std::cout << "Encrypted string: " << encrypt(s);
    return 0;
}