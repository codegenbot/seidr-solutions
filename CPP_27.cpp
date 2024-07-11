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
    string input;
    cin >> input;
    
    string result = flip_case(input);
    assert(result == "hELLO");
    
    return 0;
}