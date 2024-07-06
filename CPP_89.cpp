```cpp
#include <iostream>
#include <string>

std::string encrypt(std::string s);

int main {
    assert(encrypt("a") == "e");
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "Encrypted string: " << encrypt(s) << std::endl;
}

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