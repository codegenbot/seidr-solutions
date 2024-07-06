```cpp
#include <string>
#include <sstream>

std::istringstream encrypt(std::istringstream s) {
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
    return s;
}

std::istringstream iss ("a");
assert ((encrypt(iss)).str()=="e");