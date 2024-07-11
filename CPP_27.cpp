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
    string test_string = "Hello World";
    assert(flip_case(test_string) == "hELLO wORLD");

    return 0;
}