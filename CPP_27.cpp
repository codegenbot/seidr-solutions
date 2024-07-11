#include <cassert>
#include <string>
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
    string input = "HeLLo, WoRLD!";
    string output = flip_case(input);
    assert(output == "hEllO, wOrld!");
    return 0;
}