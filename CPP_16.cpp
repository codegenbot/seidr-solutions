#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    string temp;
    for(int i=0; i<str.length(); i++) {
        char ch = tolower(str[i]);
        bool flag = true;
        for(int j=0; j<temp.length(); j++) {
            if(ch == tolower(temp[j])) {
                flag = false;
                break;
            }
        }
        if(flag) temp += ch;
    }
    return temp.length();
}