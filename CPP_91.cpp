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
	int i=0,count=0;
	string s1;
	while(i<S.length()){
		s1=s1+S[i];
		if(S[i]=='.'||S[i]=='?'||S[i]=='!'){
			if(s1[0]=='I'){
				count++;
			}
			s1.clear();
		}
		i++;
	}
	return count;
}
int main(){
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	cout<<"Number of boredoms: "<<is_bored(s);
}
