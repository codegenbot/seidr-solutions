#include<stdio.h>
#include<string>
using namespace std;
string solve(string s){
    string result = "";
    bool foundLetter = false;

    for(int i=0; i<s.length(); i++){
        char c = s[i];
        
        if(!isalpha(c)){
            result += c;
            foundLetter = false;
        }
        else{
            if(foundLetter){
                result += tolower(c);
            }else{
                result += toupper(c);
                foundLetter = true;
            }
        }
    }

    return result;
}