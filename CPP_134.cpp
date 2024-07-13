#include<stdio.h>
#include<string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0) return false;
    string lastChar = txt.substr(txt.length()-1, 1);
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' ' && (i+1==txt.length() || !isalpha(txt[i+1]))){
            if(lastChar == txt.substr(i+1)){
                return false;
            }
        }
    }
    return isalpha(stoi(lastChar));
}