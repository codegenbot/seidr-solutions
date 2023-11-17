/*
Given a string of words, return a vector of words split on whitespace, if no whitespaces exists in the text you
should split on commas ',' if no commas exists you should return a vector with one element, the number of lower-case letters with odd order in the
alphabet, ord("a") = 0, ord("b") = 1, ... ord("z") = 25
Examples
split_words("Hello world!") ➞ {"Hello", "world!"}
split_words("Hello,world!") ➞ {"Hello", "world!"}
split_words("abcdef") == {"3"} 
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> split_words(string txt){
    vector<string> v;
    string s;
    int i,j,count=0;
    for(i=0;i<txt.length();i++){
        if(txt[i]==' '){
            v.push_back(s);
            s.clear();
        }
        else if(txt[i]==','){
            v.push_back(s);
            s.clear();
        }
        else{
            s.push_back(txt[i]);
        }
    }
    v.push_back(s);
    s.clear();
    for(i=0;i<v.size();i++){
        for(j=0;j<v[i].length();j++){
            int x=v[i][j]-97+1;
            if(x%2!=0){
                count++;
            }
        }
    }
    v.clear();
    v.push_back(to_string(count));
    return v;
}
