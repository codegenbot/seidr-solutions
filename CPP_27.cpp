#include <string>

string filp_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97&&c<=122){ 
            result += toupper(c); 
        }else{
            result += tolower(c);
        }
    }
    return result;
}