#include <iostream>
#include <string>
using namespace std;

string flip_case(string str);

string flip_case(string str){
    for(size_t i=0; i<str.length(); i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main(int argc, char *argv[]){
    string str;
    cin >> str;
    cout << flip_case(str) << endl;
    return 0;
}