#include <iostream>
#include <string>
#include <cassert>

std::string flip_case(std::string str){
    for(char &c : str){
        if(std::islower(c)){
            c = std::toupper(c);
        } else if(std::isupper(c)){
            c = std::tolower(c);
        }
    }
    return str;
}

int main() {
    std::string result = flip_case("These violent delights have violent ends");
    std::cout << result << std::endl;
    
    assert (result == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    
    return 0;
}