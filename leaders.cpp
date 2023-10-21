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
vector<int> leaders(vector<int>& input) {
    vector<int> res;
    int n = input.size();
    int max = INT_MIN;
    for(int i = n - 1; i >= 0; i--) {
        if(input[i] >= max) {
            res.push_back(input[i]);
            max = input[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main() {
    vector<int> input = {1, 2, 3, 4, 0};
    vector<int> res = leaders(input);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
