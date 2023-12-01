#include <string>
#include <cassert>

std::string flip_case(std::string str){
    std::string flippedStr = "";
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            flippedStr += toupper(str[i]);
        }
        else if(isupper(str[i])){
            flippedStr += tolower(str[i]);
        }
        else{
            flippedStr += str[i];
        }
    }
    return flippedStr;
}

int main(){
    assert (flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}