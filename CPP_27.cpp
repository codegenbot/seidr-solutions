#include <string>
#include <cassert>

std::string flipCase(std::string str) {
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

assert(flipCase("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");