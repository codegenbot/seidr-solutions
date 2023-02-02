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
    int counter = 0;
    char input[10000];
    char target;
    int count = 0;
    while(true) {
        count++;
        cin.getline(input, 10000);
        if(count == 1) {
            target = *input;
        }
        if(cin.eof()) {
            break;
        }
    }
    vector<int> ans;
    for(int i = 0; i < strlen(input); i++) {
        if(input[i] == target) {
            ans.push_back(i);
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
