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
string words_in_sentence(string sentence){
    string result = "";
    int word_length = 0;
    bool is_prime = true;
    for(int i=0;i<sentence.length();i++){
        if(sentence[i] != ' '){
            word_length++;
        }
        if(sentence[i] == ' ' || i == sentence.length()-1){
            is_prime = true;
            for(int j=2;j<word_length;j++){
                if(word_length%j == 0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime){
                for(int j=i-word_length;j<i;j++){
                    result += sentence[j];
                }
                result += ' ';
            }
            word_length = 0;
        }
    }
    result.pop_back();
    return result;
}
