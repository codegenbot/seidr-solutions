#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str){
    vector<char> charSet;
    for(int i=0; i<str.length(); i++){
        char c = tolower(str[i]);
        if(find(charSet.begin(), charSet.end(), c) == charSet.end())
            charSet.push_back(c);
    }
    return charSet.size();
}