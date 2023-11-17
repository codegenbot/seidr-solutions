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
    vector<string> a;
    if(txt.find(",")==-1 && txt.find(" ")==-1){
        a.push_back(to_string(count(txt.begin(),txt.end(),[](char c){return c-'a'<26 && c-'a'>=0 && (c-'a')%2==1;})));
        return a;
    }
    if(txt.find(" ")==-1){
        txt.replace(txt.find(","),1," ");
    }
    a.push_back(txt.substr(0,txt.find(" ")));
    a.push_back(txt.substr(txt.find(" ")+1,txt.size()));
    return a;
}
