```cpp
#include <string>
#include <iostream>

std::string encrypt(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if((c >= 'a' && c <= 'i') || (c >= 'j' && c <= 'n') || (c >= 'o' && c <= 'v') || (c >= 'w' && c <= 'z')){
            result += ((c - 2 <= 'i' && (c >= 'a' && c <= 'i')) ||
                (c - 2 <= 'n' && (c >= 'j' && c <= 'n')) ||
                (c - 2 <= 'v' && (c >= 'o' && c <= 'v')) ||
                (c - 2 <= 'z' && (c >= 'w' && c <= 'z'))) ?
                ((char)('a' + (c - 2)%26)) :
                (char)(c - 2);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Encrypted string: " << encrypt(str) << std::endl;
    return 0;
}