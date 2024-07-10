#include <iostream>
#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
            continue;
        }
        std::string word = "";
        for(int j=i; j<=s.length()-1 && s[j] != ' '; j++){
            word += s[j];
        }
        i = j - 1;
        std::sort(word.begin(), word.end());
        result += word;
    }
    return result;
}