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

vector<int> findAllIndices(string text, string target) {
    int n = text.size();
    int m = target.size();
    vector<int> res;
    if(m == 0 || n == 0) return res;
    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            res.push_back(i);
        }
    }
    return res;
}

int main() {
    string text, target;
    while(cin >> text >> target) {
        vector<int> res = findAllIndices(text, target);
        for(int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
