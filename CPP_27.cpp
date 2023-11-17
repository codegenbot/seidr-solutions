/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
#include<stdio.h>
#include<iostream>
#include<ostream>
using namespace std;
string filp_case(string str){
    int i=0;
    while(str[i]!=0){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]+=32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        i++;
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    cout<<filp_case(str)<<endl;
    return 0;
}
