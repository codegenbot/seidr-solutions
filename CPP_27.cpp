```cpp
#include <iostream>
#include <string>
using namespace std;

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

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOLEnt DeLiGhTs HaVe ViOLEnT EnDs");
    return 0;
}