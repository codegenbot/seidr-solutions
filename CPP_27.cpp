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
    string input;
    getline(cin, input);
    cout << flip_case(input);
    return 0;
}