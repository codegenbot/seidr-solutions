#include <string>
#include <cctype>

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i])){
            if(islower(str[i]))
                result += toupper(str[i]);
            else
                result += tolower(str[i]);
        }
        else
            result += str[i];
    }
    return result;
}