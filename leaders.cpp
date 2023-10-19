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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers to the right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
*/
int printLeaders(vector<int> arrVec) {
    int size = arrVec.size();
    for (int i = size-1; i >= 0; i--) {
        int curr = arrVec[i];
        bool isLeader = true;
        for (int j = i + 1; j < size; j++) {
            if (arrVec[j] >= curr) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            cout << curr << " ";
        }
    }
    cout << endl; // line break
    return 0;
}
int main() {
    vector<int> arrVec = {1, 2, 3, 4, 0};
    printLeaders(arrVec);
    return 0;
}
