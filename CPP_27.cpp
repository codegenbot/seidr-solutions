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
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_str);

    assert(flip_case(input_str) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");

    return 0;
}