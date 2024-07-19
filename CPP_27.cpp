#include <string>
#include <cctype>
#include <iostream>

std::string flip_case(std::string str);

std::string flip_case(std::string str){
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

std::cout << flip_case("Hello, World!") << std::endl;
std::cout << flip_case("These violent delights have violent ends") << std::endl;