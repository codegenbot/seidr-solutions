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
    std::string input;
    std::getline(std::cin, input);

    std::string output = flip_case(input);

    assert(flip_case("Hello World") == "hELLO wORLD");

    std::cout << output << std::endl;

    return 0;
}