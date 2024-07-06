```
#include <string>

string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }else{
            bool first = true;
            while(i < s.length()){
                if(first || s[i] > result.back()){
                    result += s[i];
                    i++;
                    first = false;
                } else {
                    i++;
                }
            }
        }
    }
    return result;
}