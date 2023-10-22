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
vector<int> find_target(string text, string target) {
    vector<int> ans;
    int sz1 = text.size(), sz2 = target.size();
    if (sz1 < sz2) return ans;
    for (int i = 0; i < sz1 - sz2 + 1; i++) {
        string str = text.substr(i, sz2);
        if (str == target) ans.push_back(i);
    }
    return ans;
}

int main() {
    string text, target;
    while (getline(cin, text)) {
        getline(cin, target);
        vector<int> ans = find_target(text, target);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
