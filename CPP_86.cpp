#include <string>

string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
            continue;
        }
        char temp[s.i+1];
        temp[0] = s[i];
        temp[1]='\0';
        sort(temp, &temp[1]);
        result += string(1, s[i]) + string(temp, temp+2);
    }
    return result;
}