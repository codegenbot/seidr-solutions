#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    // implementation of isVowel function
    string vowels = "aeiouAEIOU";
    if (vowels.find(c) != string::npos) {
        return true;
    }
    return false;
}

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.length();
    for(int i = n-2; i >= 1; i--){
        if(vowels.find(word[i]) != string::npos && !isVowel(word[i-1]) && !isVowel(word[i+1])){
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    // main function implementation
    assert (get_closest_vowel("Above") == "o");
    
    return 0;
}