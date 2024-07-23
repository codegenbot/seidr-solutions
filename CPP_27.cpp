#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

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

int main() {
    assert(FlipCase("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    std::cout << FlipCase("These violent delights have violent ends") << std::endl;

    return 0;
}