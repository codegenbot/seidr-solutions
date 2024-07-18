#include <iostream>
#include <string>
#include <cassert>

std::string flip_case(const std::string &str){
    std::string flipped_str = str;
    for(char &c : flipped_str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return flipped_str;
}

int main(){
    assert (flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");

    return 0;
}