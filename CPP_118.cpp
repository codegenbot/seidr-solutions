#include<string>
using namespace std;

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for(int i=word.length()-1; i>=1; --i){
        if(vowels.find(word[i]) != string::npos) {
            int left = i-1;
            while(left >= 0 && vowels.find(word[left]) == string::npos)
                --left;
            if(left < 0) return word.substr(i, 1);
            int right = i+1;
            while(right < word.length() && vowels.find(word[right]) == string::npos)
                ++right;
            if(right > i) return word.substr(i+1-right+i, 1);
        }
    }
    return "";
}