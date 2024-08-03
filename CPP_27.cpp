#include <iostream>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            c -= ('a' - 'A');
        else if(c >= 'A' && c <= 'Z')
            c += ('a' - 'A');
        result += c;
    }
    return result;
}

int main() {
    assert (flip_case("These violent delights have violent ends") == "tHEse ViOLENT dELIGHts HaVE ViOLENT EnDS");
    return 0;
}