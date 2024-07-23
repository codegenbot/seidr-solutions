#include <string>
#include <cassert>
#include <cctype>
#include <iostream>

std::string FlipCase(std::string str) {
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

int test() {
    assert (FlipCase("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");

    return 0;
}

int main() {
    test();
    return 0;
}