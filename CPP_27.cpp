#include <string>
#include <cctype>
#include <cassert>

string flip_case(string str);

string flip_case(string str){
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");