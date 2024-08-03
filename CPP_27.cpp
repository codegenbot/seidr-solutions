#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
#include <algorithm>

std::string flip_case(std::string str){
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){
        return std::islower(c) ? std::toupper(c) : (std::isupper(c) ? std::tolower(c) : c);
    });
    return str;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}