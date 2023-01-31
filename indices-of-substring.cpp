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
    int n;
    string s, t;
    cin >> s >> t;
    vector<int> ans;
    for(int i = 0; i < s.size()-t.size(); i++) {
        int j = 0;
        for(; j < t.size(); j++) {
            if(s[i+j] != t[j]) {
                break;
            }
        }
        if(j == t.size()) {
            ans.push_back(i);
        }
    }
    if(ans.size() == 0) {
        cout << "not found" << endl;
    } else {
        for(int i = 0; i < ans.size()-1; i++) {
            cout << ans[i] << " ";
        }
        cout << ans[ans.size()-1] << endl;
    }
    return 0;
}
