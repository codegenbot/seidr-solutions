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
    string new_string;
    int i,j,len;
    for(i=0;i<sentence.length();i++){
        if(sentence[i]==' '){
            len=i;
            for(j=2;j<len;j++){
                if(len%j==0)
                    break;
            }
            if(j==len){
                new_string+=sentence.substr(0,len);
                new_string+=' ';
            }
            sentence=sentence.substr(len+1,sentence.length());
            i=0;
        }
    }
    len=i;
    for(j=2;j<len;j++){
        if(len%j==0)
            break;
    }
    if(j==len){
        new_string+=sentence.substr(0,len);
        new_string+=' ';
    }
    return new_string;
}
int main(){
    string sentence;
    getline(cin,sentence);
    cout<<words_in_sentence(sentence);
    return 0;
}
