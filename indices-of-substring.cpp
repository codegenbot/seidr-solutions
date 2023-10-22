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


void KMP(string text, string target){
    vector<int> prefix(target.length());
    prefix[0] = 0;
    int k = 0;
    for(int i = 1; i < target.length(); i++){
        while(k > 0 && target[k] != target[i]){
            k = prefix[k-1];
        }
        if(target[k] == target[i]){
            k++;
        }
        prefix[i] = k;
    }
    int h = 0;
    for(int i = 0; i < text.length(); i++){
        while(h > 0 && target[h] != text[i]){
            h = prefix[h-1];
        }
        if(target[h] == text[i]){
            h++;
        }
        if(h == target.length()){
            cout << i - target.length()+1 << " ";
        }
    }
}
int main() {
    string t1, t2;
    t1 = "r";
    t2 = "nm,xcnwqnd@#$fwkdjn3";
    KMP(t2, t1);
    return 0;
}
