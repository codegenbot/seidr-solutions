#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str){
    string temp;
    for(int i=0; i<str.length();i++){
        if(str[i]>='a' && str[i]<='z')
            temp += tolower(str[i]);
        else if(str[i]>='A' && str[i]<='Z')
            temp += tolower(str[i]);
    }
    set<char> s(temp.begin(),temp.end());
    return s.size();
}