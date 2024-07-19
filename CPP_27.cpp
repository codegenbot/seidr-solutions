#include <string>
#include <cctype>
#include <iostream>
#include <cassert>

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

int main() {
    std::cout << flip_case("Hello, World!") << std::endl;
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");

    return 0;
}