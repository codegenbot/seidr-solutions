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
vector<int> answer;

void find(string text, string target) {
    int len = text.length();
    int tlen = target.length();
    for(int i = 0; i < len; i++) {
        if(text[i] == target[0]) {
            int x = i;
            int y = 0;
            while(text[x] == target[y] && x < len && y < tlen) {
                x++;
                y++;
            }
            if(y == tlen) {
                answer.push_back(i);
            }
        }
    }
}

int main() {
    string text = "############";
    string target = "#";
    find(text, target);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
}
