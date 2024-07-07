#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string encode(string message){
    string result = "";
    for(int i=0; i<message.length(); i++){
        char c = message[i];
        if(c >= 'a' && c <= 'z'){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                result += (char)((c - 'a' + 2)%26 + 'a');
            else
                result += (char)(c);
        }
        else if(c >= 'A' && c <= 'Z'){
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                result += (char)((c - 'A' + 2)%26 + 'A');
            else
                result += (char)(c);
        }
        else{
            result += c;
        }
    }
    return result;
}