#include <algorithm>

string filp_case(string str){
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = toupper(str[i]);
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = tolower(str[i]);
    }
    return str;
}