```cpp
#include <cassert>
#include <cctype>
#include <string>

std::string filp_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = (char)str[i];
        if(std::islower(c))
            result += std::toupper((char)c);
        else if(std::isupper(c))
            result += std::tolower((char)c);
        else
            result += (char)c;
    }
    return result;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOLEnt DeLiGhTs HaVe ViOLEnT EnDs");
    return 0;
}