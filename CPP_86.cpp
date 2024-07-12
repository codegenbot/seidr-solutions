#include <algorithm>
string anti_shuffle(string s){
    string result = "";
    int i = 0;
    while(i < s.length()){
        if(s[i] == ' '){
            result += ' ';
            i++;
        }else{
            string word = "";
            while(i < s.length() && s[i] != ' '){
                word += s[i];
                i++;
            }
            for(char c : word){
                result += (char)tolower(c);
            }
        }
    }
    return result;
}