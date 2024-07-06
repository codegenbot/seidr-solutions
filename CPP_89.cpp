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
            if(c == 'x') {
                result += "Error: Input string contains the character 'x'. Please enter a different string.";
                return result;
            } else if(c == 'X') {
                result += "Error: Input string contains the character 'X'. Please enter a different string.";
                return result;
            } else {
                c = (c - 'a' + 3) % 26 + 'a';
            }
        } else if(c >= 'A' && c <= 'Z'){
            if(c == 'X') {
                result += "Error: Input string contains the character 'X'. Please enter a different string.";
                return result;
            } else {
                c = (c - 'A' + 3) % 26 + 'A';
            }
        }
        result += c;
    }
    return result;
}