#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str){
    for(char &c : str){
        if(std::isupper(c)){
            c = std::tolower(c);
        } else if(std::islower(c)){
            c = std::toupper(c);
        }
    }
    return str;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    
    std::cout << "Assertion passed" << std::endl;
    
    return 0;
}