#include<string>
using namespace std;

string get_closest_vowel(string word){
    int left = 0, right = word.size() - 1;
    while(left < right){
        if(isvowel(word[left])){
            return string(1, tolower(word[left]));
        }
        if(isvowel(word[right])){
            return string(1, tolower(word[right]));
        }
        left++;
        right--;
    }
    return "";
}

bool isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}