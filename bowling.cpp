#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
int trans(int t){
    if(t=='X') return 10;
    if(t=='/') return 10-t+'0';
    if(t=='-') return 0;
    return t-'0';
}
int cnt(int t){
    if(t=='X') return 2;
    if(t=='/') return 1;
    return 0;
}
int main() {
    cout<<"input:"<<endl;
    string s;
    cin>>s;
    int sum=0;
    int num=0;
   for(int i=0;i<s.length();i++){
       num+=cnt(s[i]);
       sum+=trans(s[i]);
       if(s[i]!='X'){
           for(int j=0;j<num;j++){
              sum+=trans(s[i+1+j]); 
           }
           i+=num;
       }
   }
   cout<<"output:"<<endl;
   cout<<sum<<endl;
    return 0;
}
