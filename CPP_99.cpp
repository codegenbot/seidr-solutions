/*
Create a function that takes a value (string) representing a number
and returns the closest integer to it. If the number is equidistant
from two integers, round it away from zero.

Examples
>>> closest_integer("10")
10
>>> closest_integer("15.3")
15

Note:
Rounding away from zero means that if the given number is equidistant
from two integers, the one you should return is the one that is the
farthest from zero. For example closest_integer("14.5") should
return 15 and closest_integer("-14.5") should return -15.
*/
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
int closest_integer(string value){
    int a=0,b=0;
    string str1;
    if(value[0]=='-'){
        a=-1;
        b=1;
        str1=value.substr(1);
    }
    else{
        a=1;
        b=0;
        str1=value;
    }
    int i=0,j=str1.length();
    while(str1[i]!='.'){
        i++;
    }
    int c=atoi(str1.substr(0,i).c_str());
    int d=atoi(str1.substr(i+1,j).c_str());
    if(d>=5){
        c=c+1;
    }
    if(a==-1){
        c=c*-1;
    }
    return c;
}
int main(){
    string str;
    cin>>str;
    cout<<closest_integer(str);
    return 0;
}
