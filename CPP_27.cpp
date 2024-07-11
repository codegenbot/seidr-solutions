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
    string input = "Hello World";
    string output = flip_case(input);
    assert(output == "hELLO wORLD");
    
    return 0;
}