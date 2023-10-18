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
vector<int> find_all(string text, string target) {
    vector<int> res;
    int len = target.size();
    for (int i = 0; i <= text.size() - len; i++) {
        if (text.substr(i, len) == target) {
            res.push_back(i);
        }
    }
    return res;
}
int main() {
    string text, target;
    while (cin >> text >> target) {
        vector<int> res = find_all(text, target);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
