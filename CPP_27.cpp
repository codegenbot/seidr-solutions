#include <iostream>
#include <string>
#include <cassert>

std::string flip_case(std::string str){
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        } else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

assert (flip_case("These violent delights have violent ends") == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");