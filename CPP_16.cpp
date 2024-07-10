#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    string temp;
    for(int i=0; i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            temp.push_back(tolower(str[i]));
        }
        else if(str[i]>='A' && str[i]<='Z'){
            temp.push_backtolower(str[i]);
        }
    }
    vector<char> vec;
    for(int i=0; i<temp.length();i++){
        bool flag = false;
        for(int j=0; j<vec.size();j++){
            if(temp[i]==vec[j]){
                flag = true;
                break;
            }
        }
        if(flag==false){
            vec.push_back(temp[i]);
        }
    }
    return vec.size();
}