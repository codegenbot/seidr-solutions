#include <string>

string filp_case(string str) {
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z') 
            result += toupper((char)toupper(c));
        else if(c >= 'A' && c <= 'Z')
            result += tolower((char)tolower(c));
        else
            result += c;
    }
    return result;
}