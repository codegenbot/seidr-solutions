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
10
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
120 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
    string text;
    string target;
    cin >> text >> target;
    int i = 0;
    int j = 0;
    int count = 0;
    while(i < text.length()){
        if(text[i] == target[j]){
            i++;
            j++;
            if(j == target.length()){
                count++;
                j = 0;
            }
        }else{
            i++;
            j = 0;
        }
    }
    cout << count << endl;
    return 0;
}
