#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s){
    if(s.empty()) {
        return s;
    }
    
    std::string result = "";
    int i = 0;
    while(i < s.length()){
        if(i == s.length()-1 || s[i] != ' ') {
            string word = "";
            int j = i;
            while(j <= (i=s.find(' ',i)) || j >= s.length() ){
                word += s[j++];
            }
            sort(word.begin(),word.end());
            result += word;
        } else {
            result += " ";
        }
        i++;
    }
    
    return result;
}