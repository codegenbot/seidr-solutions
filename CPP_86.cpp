#include <string>

std::string anti_shuffle(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }else{
            char c = s[i];
            while(c != ' ' && i < s.length()){
                int j = i+1;
                while(j < s.length() && s[j] <= c){
                    c = s[j];
                    j++;
                }
                result += c;
                i = j-1;
            }
        }
    }
    return result;
}