#include <string>
#include <algorithm> 

std::string flip_case(std::string str){
    std::transform(str.begin(), str.end(), str.begin(), [](char c) { 
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
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS"); 
    return 0;
}