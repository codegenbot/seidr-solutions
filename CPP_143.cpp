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
    string result;
    int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    int a,b,c,d,e,f,g,h;
    int len=sentence.length();
    int count=0;
    for(i=0;i<len;i++){
        if(sentence[i]==' '){
            count++;
        }
    }
    count++;
    string arr[count];
    int arr_len[count];
    int arr_count=0;
    for(i=0;i<len;i++){
        if(sentence[i]==' '){
            arr_count++;
        }
        else{
            arr[arr_count]+=sentence[i];
        }
    }
    for(i=0;i<count;i++){
        arr_len[i]=arr[i].length();
    }
    for(i=0;i<count;i++){
        for(j=2;j<arr_len[i];j++){
            if(arr_len[i]%j==0){
                break;
            }
        }
        if(j==arr_len[i]){
            result+=arr[i];
            result+=' ';
        }
    }
    return result;
}
