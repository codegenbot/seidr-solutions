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
*/
int main() {
    string s;
    string t;
    cin>>s;
    cin>>t;
    int n = 0;
    int m = 0;
    n = s.size();
    m = t.size();
    int i = 0;
    int j = 0;
    while(i < n){
        if(s[i] == t[j]){
            i++;
            j++;
        }
        else{
            i = i - j + 1;
            j = 0;
        }
        if(j == m){
            cout<<i-m<<" ";
            i = i - j + 1;
            j = 0;
        }
    }
    return 0;
}
