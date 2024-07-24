#include <string>

using namespace std;

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            c = (char) toupper((int)c);
        else if(c >= 'A' && c <= 'Z')
            c = (char) tolower((int)c);
        result += c;
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOleNt dEliGhTs HaVe ViOleNt EnDs");
    return 0;
}