#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> select_words(string s,int n){
    vector<string> result;
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            // Check if the current word has exactly n consonants
            int consonantCount = 0;
            for(int j=0; j<word.length(); j++){
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u' && word[j] != 'A' && word[j] != 'E' && word[j] != 'I' && word[j] != 'O' && word[j] != 'U'){
                    consonantCount++;
                }
            }
            if(consonantCount == n){
                result.push_back(word);
            }
            word = "";
        }
        else{
            word += s[i];
        }
    }
    // Check the last word in the string
    int consonantCount = 0;
    for(int j=0; j<word.length(); j++){
        if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u' && word[j] != 'A' && word[j] != 'E' && word[j] != 'I' && word[j] != 'O' && word[j] != 'U'){
            consonantCount++;
        }
    }
    if(consonantCount == n){
        result.push_back(word);
    }
    return result;
}