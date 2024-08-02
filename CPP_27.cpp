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

int main() {
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);
    assert(flip_case(input_string) == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}