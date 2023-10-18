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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0

input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11

input:
$$$$$$$$$$$$$$$$$$$$$$
$$$$
output:
19 
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18

*/
int main() {
    string text;
    string target;
    cin>>text>>target;
    int len = text.size();
    int len2 = target.size();
    int temp = 0;
    int count = 0;
    string str;
    for(int i = 0;i<len;i++){
        if(text[i] == target[temp]){
            if(temp == len2-1){
                str += to_string(i-temp)+" ";
                temp = 0;
                count++;
            }
            else{
                temp++;
            }
        }
        else{
            temp = 0;
        }
    }
    if(count == 0)
        cout<<0<<endl;
    else{
        str.erase(str.size()-1,1);
        cout<<count<<endl;
        cout<<str;
    }
    cout<<endl;
    return 0;
}
