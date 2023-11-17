/*
You are given a string representing a sentence,
the sentence contains some words separated by a space,
and you have to return a string that contains the words from the original sentence,
whose lengths are prime numbers,
the order of the words in the new string should be the same as the original one.

Example 1:
    Input: sentence = "This is a test"
    Output: "is"

Example 2:
    Input: sentence = "lets go for swimming"
    Output: "go for"

Constraints:
    * 1 <= len(sentence) <= 100
    * sentence contains only letters
*/
#include<stdio.h>
#include<string>
using namespace std;

bool is_prime(int n){
    if(n <= 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence){
    string result = "";
    int i = 0;
    while(i < sentence.length()){
        string word = "";
        while(sentence[i] != ' ' && i < sentence.length()){
            word += sentence[i];
            i++;
        }
        if(is_prime(word.length())){
            result += word + " ";
        }
        i++;
    }
    return result;
}

int main1(){
    string sentence = "This is a test";
    printf("%s\n", words_in_sentence(sentence).c_str());
    sentence = "lets go for swimming";
    printf("%s\n", words_in_sentence(sentence).c_str());
    return 0;
}
