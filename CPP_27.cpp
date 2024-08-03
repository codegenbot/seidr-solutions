#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
#include <algorithm>

std::string flip_case(std::string str){
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){
        return std::islower(c) ? std::toupper(c) : (std::isupper(c) ? std::tolower(c) : c);
    });
    return str;
}

int main(){
    std::string input_str;
    std::getline(std::cin, input_str);
    
    std::cout << flip_case(input_str) << std::endl;
    
    return 0;
}