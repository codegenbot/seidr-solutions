#include <iostream>
#include <string>

std::string filp_case(std::string str){
    std::string result = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += toupper(str[i]);
        }
        else{
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    assert (filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}