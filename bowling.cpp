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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/

int comp(int a, int b) {
    return a < b;
}

int solution(vector<int> A) {
    // It is test of memory
    // write your code in C++14 (g++ 6.2.0)
    int cnt = 0;
    sort(A.begin(), A.end(), comp);
    for (int i = 0; i < A.size(); ) {
        if(A[i] != A[i + 1]) {
            cnt++;
            i += 2;
        } else
            i++;
    }
    return cnt;
}


int main() {
    vector<int> A = {3, 4, 3, 0, 2, 2, 3, 0, 0};
    //vector<int> A = {1, 1};
    cout << "Hello, World!" << endl;
    cout << solution(A);


    return 0;
