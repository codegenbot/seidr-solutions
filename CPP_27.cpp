#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(const std::string& str){
    std::string result = str;
    for(int i=0; i<str.length(); i++){
        if(std::islower(str[i])){
            result[i] = std::toupper(str[i]);
        } else if(std::isupper(str[i])){
            result[i] = std::tolower(str[i]);
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}