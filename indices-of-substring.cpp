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
vector<int> find_substring(string text, string target) {
    vector<int> ret;
    int tlen = target.size();
    int len = text.size();
    for(int i = 0; i < len - tlen; i++) {
        if(text.substr(i, tlen) == target) {
            ret.push_back(i);
        }
    }
    return ret;
}
int main() {
    string text, target;
    cin >> text >> target;
    vector<int> ret = find_substring(text, target);
    for(int i = 0; i < ret.size(); i++) {
        cout << ret[i] << ' ';
    }
    return 0;
}
