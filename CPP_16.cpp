#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> v;
    for(char c : str) {
        if(find(v.begin(), v.end(), c) == v.end()) 
            v.push_back(c);
    }
    return (int)v.size();
}