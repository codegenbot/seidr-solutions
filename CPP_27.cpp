#include <string>
#include <cassert>

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
    getline(cin, input);
    string result = flip_case(input);
    cout << result << endl;
    
    return 0;
}