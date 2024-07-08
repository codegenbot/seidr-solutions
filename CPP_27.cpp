#include <iostream>
#include <string>
#include <cassert>

std::string filp_case(std::string str){
    std::string result = "";
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
    assert(filp_case("These violent delights have violent ends") == "these violent delights have violent ends");
    std::cout << filp_case("Hello, world!") << std::endl;
    return 0;