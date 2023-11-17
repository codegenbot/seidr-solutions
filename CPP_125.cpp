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
    vector<string> res;
    string s1 = "";
    int count = 0;
    for(int i = 0; i < txt.size(); i++){
        if(txt[i] != ' ' and txt[i] != ','){
            s1 += txt[i];
            if(txt[i] - 'a' & 1)
                count++;
        }else{
            if(s1.size() > 0){
                res.push_back(s1);
                s1 = "";
            }
        }
    }
    if(s1.size() > 0){
        res.push_back(s1);
        s1 = "";
    }
    if(res.size() == 0){
        res.push_back(to_string(count));
    }
    return res;
}
int main(){
    string s;
    getline(cin,s);
    vector<string> res = split_words(s);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
