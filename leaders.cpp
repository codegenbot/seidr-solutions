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
int main() {
#if 0
    priority_queue <int, vector<int>, less<int>> queue;
#else
    vector<int> queue;
#endif
    int curr; cin >> curr;
    while(curr != 0) {
        queue.push(curr);
        cin >> curr;
    }
    long max = -1;
    while(!queue.empty()) {
        curr = queue.top();
        if (curr >= 0) {
            if (curr >= max) {
                cout << curr;
                if (queue.size() != 1)
                    cout << ' ';
                max = curr;
            }
        }
#if 0
        else
            break;
#endif
        queue.pop();
    }
    return 0;
}
