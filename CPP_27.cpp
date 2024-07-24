#include <iostream>
#include <string>
#include <cctype>

std::string flip_case(const std::string& str) {
    std::string flipped_str = str;
    for(char &c : flipped_str){
        if(std::islower(c)){
            c = std::toupper(c);
        } else if(std::isupper(c)){
            c = std::tolower(c);
        }
    }
    return flipped_str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}