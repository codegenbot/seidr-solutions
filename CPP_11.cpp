/*
Input are two strings a and b consisting only of 1s and 0s.
Perform binary XOR on these inputs and return result also as a string.
>>> string_xor("010", "110")
"100"
*/
#include<stdio.h>
#include<string>
using namespace std;
string string_xor(string a,string b){
    int i,len;
    string res;
    len=a.length();
    for(i=0;i<len;i++){
        if(a[i]=='0' && b[i]=='0')
            res+="0";
        else if(a[i]=='1' && b[i]=='1')
            res+="0";
        else
            res+="1";
    }
    return res;
}
