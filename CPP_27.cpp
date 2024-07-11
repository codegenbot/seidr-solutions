#include <string>
#include <cassert>
using namespace std;

string flip_case(string str){
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

int main(){
    string str = "Hello World";
    string flipped = flip_case(str);
    assert(flipped == "hELLO wORLD");
    return 0;
}