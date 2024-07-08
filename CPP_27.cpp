```cpp
#include <iostream>
#include <string>

std::string filp_case(std::string str){
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = std::toupper((char)str[i]);
        } else {
            str[i] = std::tolower((char)str[i]);
        }
    }
    return str;
}

int main() {
    std::cout << filp_case("Hello, world!") << std::endl;
    return 0;
}