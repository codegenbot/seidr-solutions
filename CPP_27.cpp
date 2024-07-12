#include <iostream>
#include <string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = (char)str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper((char)c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower((char)c);
        else
            result += (char)c;
    }
    return result;
}

int main(){
    string str = "These violent delights have violent ends";
    cout << flip_case(str) << endl;
    return 0;
}