#include <string>

string flip_case(string str){
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            str[i] = (c - ('a' - 'A'));
        else if(c >= 'A' && c <= 'Z')
            str[i] = (c - ('A' - 'a'));
    }
    return str;
}