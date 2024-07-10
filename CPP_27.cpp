#include <iostream>
#include <string>
#include <cctype>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(std::islower(str[i]))
            result += std::toupper(str[i]);
        else
            result += std::tolower(str[i]);
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}