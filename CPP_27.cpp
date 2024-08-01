#include <string>
#include <cctype>
#include <cassert>

std::string flipCase(std::string str){
    for(char &c : str){
        if(std::islower(c)){
            c = std::toupper(c);
        } else if(std::isupper(c)){
            c = std::tolower(c);
        }
    }
    return str;
}

int main(){
    assert (flipCase("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}