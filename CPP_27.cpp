#include <iostream>
#include <string>

std::string flipCase(std::string str) {
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += toupper((char)str[i]);
        } else {
            result += tolower((char)str[i]);
        }
    }
    return result;
}

int main() {
    std::cout << flipCase("These violent delights have violent ends") << std::endl;
    std::cout << flipCase("Hello, world!") << std::endl;
    return 0;
}