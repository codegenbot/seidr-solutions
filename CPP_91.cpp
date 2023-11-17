/*
You'll be given a string of words, and your task is to count the number
of boredoms. A boredom is a sentence that starts with the word "I".
Sentences are delimited by '.', '?' or '!'.

For example:
>>> is_bored("Hello world")
0
>>> is_bored("The sky is blue. The sun is shining. I love this weather")
1
*/
#include<stdio.h>
#include<string>
using namespace std;
int is_bored(string S){
    int count = 0;
    for (int i = 0; i<S.length(); i++){
        if (S[i] == 'I'){
            count++;
        }
    }
    return count;
}
int main(){
    string S;
    cout<<"Enter the string: ";
    getline(cin,S);
    cout<<"Number of boredoms: "<<is_bored(S)<<endl;
    return 0;
}
