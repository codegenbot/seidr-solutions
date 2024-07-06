#include <string>

string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }else{
            bool foundSpace = false;
            while(i < s.length() && !foundSpace){
                int j = i+1;
                foundSpace = true;
                while(j < s.length() && s[j] <= s[i]){
                    if(s[j] != ' ')
                        foundSpace = false;
                    j++;
                }
                result += s[i];
                i = j-1;
            }
        }
    }
    return result;
}