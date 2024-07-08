#include <iostream>
#include <string>
#include <cctype>

std::string flip_case(std::string str){
    std::string result = "";
    for(char c : str){
        if(islower(c)) {
            result += toupper(c);
        } else {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}