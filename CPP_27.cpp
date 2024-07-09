#include <string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            c -= 32;
        else if(c >= 'A' && c <= 'Z')
            c += 32;
        result += c;
    }
    return result;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOleNt DeLiGhTs HaVe ViOLeNt EnDs");
    return 0;
}