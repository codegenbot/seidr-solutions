#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str){
    string temp;
    for(int i=0; i<str.length();i++){
        if(temp.find(tolower(str[i])) == string::npos) 
            temp += tolower(str[i]);
    }
    return temp.size();
}