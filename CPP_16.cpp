#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str){
    string temp;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            temp += tolower(str[i]);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            temp += tolower(str[i]);
        }
    }
    vector<char> vec(temp.begin(), temp.end());
    sort(vec.begin(), vec.end());
    int count = 1;
    for(int i = 0; i < vec.size() - 1; i++){
        if(vec[i] != vec[i+1]){
            count++;
        }
    }
    return count;
}