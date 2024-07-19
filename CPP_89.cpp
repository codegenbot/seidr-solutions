```cpp
#include <string>
#include <iostream>

std::string encrypt(std::string s) {
    std::string result = "";
    for(size_t i = 0; i < s.size(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            c = (c - 'a' + 2) % 26 + 'a';
        } else if(c >= 'n' && c <= 'z'){
            c = (c - 'n' + 2) % 26 + 'n';
        }
        result += c;
    }
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "Encrypted string: " << encrypt(s) << std::endl;
    return 0;
}