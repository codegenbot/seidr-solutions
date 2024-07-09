#include <string>
#include <algorithm> // include algorithm header for 'transform' function

std::string flip_case(std::string str){ // change 'string' to 'std::string'
    std::transform(str.begin(), str.end(), str.begin(), [](char c) { // use 'std::transform' with lambda function
        if(islower(c)){
            return toupper(c);
        } else if(isupper(c)){
            return tolower(c);
        }
        return c;
    });
    return str;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS"); // fix typo 'filp_case' to 'flip_case'
    return 0;
}