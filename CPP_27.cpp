#include <cassert>
#include <string>

std::string flipCase(std::string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = (char)str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper((char)c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower((char)c);
        else
            result += (char)c;
    }
    return result;
}

int main(){
    assert(flipCase("These violent delights have violent ends") == "tHEse ViOLEnt DeLiGhTs HaVe ViOLEnT EnDs");
    return 0;
}