#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(const std::string& str){
    std::string result = str;
    for(char &c : result){
        if(std::islower(c)){
            c = std::toupper(c);
        } else if(std::isupper(c)){
            c = std::tolower(c);
        }
    }
    return result;
}

int main(){
    assert(flip_case("Hello World") == "hELLO wORLD");
    assert(flip_case("abcXYZ456") == "ABCxyz456");
    assert(flip_case("Testing 123") == "tESTING 123");

    return 0;
}