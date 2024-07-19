#include<string>
using namespace std;

string get_closest_vowel(string word){
    for(int i=word.size()-1; i>=0; --i){
        if(vowl(word[i])){
            int left = 0, right = i;
            while(left<i && !cons(word[left])) ++left;
            while(right>i && !cons(word[right-1])) --right;
            return word.substr(left, right-left) == "" ? "" : string(1,word[right-1]);
        }
    }
    return "";
}

bool vowl(char c){
    return (c >= 'a' && c <= 'z') && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool cons(char c){
    return (c >= 'a' && c <= 'z') && !vowl(c);
}