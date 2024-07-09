#include <string>
std::string anti_shuffle(std::string s){
    if(s.empty()) {
        return s;
    }
    std::string result = "";
    int i = 0;
    while(i < s.length()){
        if(s[i] == ' '){
            result += " ";
        } else{
            string word = "";
            int j = i;
            while(j < s.length() && s[j] != ' ') {
                word += s[j];
                j++;
            }
            sort(word.begin(),word.end());
            result += word;
            i = j;
        }
    }
    return result;
}