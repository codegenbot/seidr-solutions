#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s){
    std::string result = "";
    std::string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            std::sort(word.begin(), word.end());
            result += word + " ";
            word = "";
        }
    }
    std::sort(word.begin(), word.end());
    result += word;
    return result;
}