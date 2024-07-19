```cpp
#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
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
    if (!(std::getline(std::cin, s))) {
        std::cerr << "Failed to read input.\n";
        return 1; 
    } 
    std::cout << "Encrypted string: " << encrypt(s) << std::endl;
    return 0;
}