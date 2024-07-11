#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for(int i=word.length()-1; i>=0; i--){
        if(find(vowels.begin(),vowels.end(),word[i])!=vowels.end()){
            int left=0, right=i+1;
            while(left<i && !find(vowels.begin(),vowels.end(),word[left]) == vowels.end())
                left++;
            while(right<i+1 && !find(vowels.begin(),vowels.end(),word[right]) == vowels.end())
                right++;
            return word.substr(left, right-left);
        }
    }
    return "";
}