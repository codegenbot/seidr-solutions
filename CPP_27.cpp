#include <string>
#include <cctype>

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower(c);
        else
            result += c;
    }
    return result;
}

assert(flip_case("These violent delights have violent ends") == "tHEse ViOlENT dELiGHTs HaVe ViOlENT eNdS");