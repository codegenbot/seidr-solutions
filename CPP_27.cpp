#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = tolower(str[i]);
        if(isalpha(c))
            (isupper(c)) ? result += tolower(c) : result += toupper(c);
        else
            result += c;
    }
    return result;

}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOLEnt DeLiGhTs HaVe ViOLEnT EnDs");
    return 0;
}