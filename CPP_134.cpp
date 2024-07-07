#include<stdio.h>
#include<string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.size()-1);
    bool isLetter = (lastChar[0] >= 'a' && lastChar[0] <= 'z') || (lastChar[0] >= 'A' && lastChar[0] <= 'Z');
    return isLetter && !isalpha(txt[txt.size()-2]);
}