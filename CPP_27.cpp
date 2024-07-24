#include <string>

std::string filp_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97 && c<=122){ // lowercase letters (a-z)
            result += toupper((unsigned char)c);
        }
        else if(c>=65 && c<=90){ // uppercase letters (A-Z)
            result += tolower((unsigned char)c);
        }else{
            result+=c;
        }
    }
    return result;
}