#include <iostream>
#include <string>
#include <cctype>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += std::toupper((char)str[i]);
        } else {
            result += std::tolower((char)str[i]);
        }
    }
    return result;
}

std::cout << flip_case("Hello, world!") << std::endl;