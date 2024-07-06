#include <string>

string anti_shuffle(string s){
    string result = "";
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
                for(int k=i; k<=j-1; k++){
                    result += s[k];
                }
                i = j-1;
            }
        }
    }
    return result;
}