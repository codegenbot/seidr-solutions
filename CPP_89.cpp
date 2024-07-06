```cpp
#include <string>
#include <sstream>

int main() {
    std::string inputStr;
    std::stringstream ss;
    std::getline(std::cin, inputStr);
    ss << inputStr;  

    // Then use this encrypt function:
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

    // Now you can call this function:
    std::string encrypted = encrypt(ss);
    std::cout << "Encrypted: " << encrypted << std::endl;
}