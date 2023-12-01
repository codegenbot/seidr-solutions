#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string filp_case(std::string str){
    for(int i=0; i<str.length(); i++){
        if(std::islower(str[i])){
            str[i] = std::toupper(str[i]);
        }
        else if(std::isupper(str[i])){
            str[i] = std::tolower(str[i]);
        }
    }
    return str;
}

int main(){
    assert (filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");

    return 0;
}