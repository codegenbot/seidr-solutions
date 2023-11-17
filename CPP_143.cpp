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
    int count = 0;
    bool prime = true;
    string result = "";
    for (int i = 0; i < sentence.length(); i++){
        if (sentence[i] != ' '){
            count++;
        }
        else if (count != 0){
            for (int j = 2; j < count; j++){
                if (count % j == 0){
                    prime = false;
                    break;
                }
            }
            if (prime){
                for (int k = i - count; k < i; k++){
                    result += sentence[k];
                }
                result += ' ';
            }
            count = 0;
            prime = true;
        }
    }
    for (int j = 2; j < count; j++){
        if (count % j == 0){
            prime = false;
            break;
        }
    }
    if (prime){
        for (int k = sentence.length() - count; k < sentence.length(); k++){
            result += sentence[k];
        }
    }
    return result;
}
