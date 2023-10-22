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
// O(n^2)
vector<int> targetIndex(string &text, string &target) {
    vector<int> res;
    if(text.size() == 0 || target.size() == 0) return res;
    int n = text.size(), m = target.size();
    for(int i = 0, j = 0; i < n; i++) {
        if(text[i] == target[j]) {
            j++;
            if(j == m) {
                res.push_back(i - j + 1);
                j = 0;
            }
        }else j = 0;
    }
    return res;
}
int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> res = targetIndex(text, target);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }cout << endl;
}
