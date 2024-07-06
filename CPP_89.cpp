```cpp
#include <string>
#include <sstream>

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input; 
    
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

    std::string encrypted = encrypt(input);
    std::cout << "Encrypted: " << encrypted << std::endl;
}