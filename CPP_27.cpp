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

std::string input_str;
std::cin >> input_str;
assert(flip_case(input_str) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");