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
int helper(string &str, int index){
    if(index+1 >= str.size()){
        if(str[index] == 'X'){
            return 10;
        } else if(str[index] == '-'){
            return 0;
        } else{
            return str[index] -'0';
        }
    }
    if(str[index] == '-'){
        return helper(str, index+1);
    } else if(str[index] == '/'){
        return 10 - str[index-1] + helper(str,index+1);
    } else if(str[index] == 'X'){
        return 10 + helper(str, index+1) + helper(str, index+2);
    } else{
        return str[index] - '0' + helper(str, index+1);
    }
}
int main() {
    string str;
    getline(cin, str);
    int res = 0;
    for(int i = 0; i < str.size() && res < 10; i++){
        res += helper(str, i);
    }
    cout<<res<<endl;
    
    return 0;
}
