#include <string>
#include <cctype>

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(isalpha(c))
            result += (isupper(c))? tolower(c) : toupper(c);
        else
            result += c;
    }
    return result;
}