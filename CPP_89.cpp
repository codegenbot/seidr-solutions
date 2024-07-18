#include<stdio.h>
#include<string>
using namespace std;

string encrypt(string s){
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if(isalpha(s[i])){
            char new_char = s[i] + 2 * 'A' - 'a' + 2;
            if(new_char > 'Z') {
                new_char = 'A' + (new_char - 'Z' - 1);
            }
            result += new_char;
        } else {
            result += s[i];
        }
    }
    return result;
}