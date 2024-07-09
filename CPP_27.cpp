```cpp
#include <string>
#include <cctype>

std::string flip_case(std::string str){
    std::string result = "";
    for(char c : str){
        if(isalpha(c)){
            result += (islower(c)) ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result;
}

assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");