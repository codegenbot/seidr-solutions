#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word){
    int left = 0;
    while(word[left] != ' ' && !isalpha(word[left])) left++;
    
    for(int right = word.size() - 1; right >= 0 && !isalpha(word[right]); right--){
        if(!isalpha(word[right-1]) && (word[right] == 'a' || word[right] == 'e' || 
                                       word[right] == 'i' || word[right] == 'o' || 
                                       word[right] == 'u'|| word[right] == 'A' || 
                                       word[right] == 'E' || word[right] == 'I' || 
                                       word[right] == 'O' || word[right] == 'U')) {
            return string(1, word[right]);
        }
    }
    
    return "";
}