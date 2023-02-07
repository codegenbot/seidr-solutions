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
    string text, target;
    while (cin >> text >> target) {
        vector<int> res;
        int len = text.size(), tlen = target.size();
        for (int i = 0; i < len; i++) {
            if (text[i] == target[0]) {
                bool flag = true;
                for (int j = 1; j < tlen; j++) {
                    if (i + j >= len || text[i + j] != target[j]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) res.push_back(i);
            }
        }
        for (int i = 0; i < res.size(); i++) {
            if (i) cout << " ";
            cout << res[i];
        }
        cout << endl;
    }
    return 0;
}
