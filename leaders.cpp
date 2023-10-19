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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
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
    deque<int> printVec;
    vector<int> returnVec;
    int first;
    if(arrVec.size() == 1) {
        printVec.push_back(arrVec[0]);
        returnVec.push_back(arrVec[0]);
    } else {
        first = max(arrVec[0], arrVec[1]);
        printVec.push_back(first);
        returnVec.push_back(first);
    }
    for(int i = 0; i < arrVec.size()-1; i++) {
        if(first <= arrVec[i]) {
            cout << first << endl;
            cout << endl;
            return 0;
        }
    }
    for(int i = arrVec.size()-1; i >= 0; i--) {
        printVec.push_back(arrVec[i]);
    }
    
    for(int i = 0; i < arrVec.size(); i++) {
        first = printVec[0];
        printVec.pop_front();
        cout << first;
    }
    return returnVec[0];
    returnVec.pop_back();
}
int main() {
    return 0;
}
