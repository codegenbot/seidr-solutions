#include <string>

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

int main() {
    string str = "Hello World";
    assert(flip_case(str) == "hELLO wORLD");
    return 0;
}