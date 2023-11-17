/*
Given a string representing a space separated lowercase letters, return a map
of the letter with the most repetition and containing the corresponding count.
If several letters have the same occurrence, return all of them.

Example:
histogram("a b c") == {{"a", 1}, {"b", 1}, {"c", 1}}
histogram("a b b a") == {{"a", 2}, {"b", 2}}
histogram("a b c a b") == {{"a", 2}, {"b", 2}}
histogram("b b b b a") == {{"b", 4}}
histogram("") == {}

*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
map<char,int> histogram(string test){
    map<char,int> result;
    for(int i=0;i<test.length();i++){
        if(result.find(test[i])!=result.end()){
            result[test[i]]++;
        }else{
            result[test[i]]=1;
        }
    }
    return result;
}
int main(){
    string test="a b b a";
    map<char,int> result=histogram(test);
    map<char,int>::iterator it;
    for(it=result.begin();it!=result.end();it++){
        printf("%c %d\n",it->first,it->second);
    }
    return 0;
}
