#include <string>
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

std::string result = flip_case("These violent delights have violent ends");
```