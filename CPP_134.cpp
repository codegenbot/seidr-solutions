#include<stdio.h>
#include<string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0) return false;
    char lastChar = txt.back();
    bool lastIsLetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z');
    return lastIsLetter && (txt.find(lastChar) == txt.length() - 1);
}