#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string encode(string message){
    string result = "";
    for(int i=0; i<message.length();i++){
        char c = message[i];
        if(c >= 'a' && c <= 'z'){
            c += 3;
            if(c > 'z') c -= 26;
        }
        else if(c >= 'A' && c <= 'Z'){
            c += 3;
            if(c > 'Z') c -= 26;
        }
        else{
            result += c;
        }
        result += tolower(toupper(c));
    }
    return result;
}