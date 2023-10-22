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
vector<int> leaders(const vector<int> &input) {
    vector<int> res;
    int tmp = INT_MIN;
    for(int i = input.size() - 1; i >= 0; i--){
        if(input[i] >= tmp){
            res.push_back(input[i]);
            tmp = input[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main() {
    vector<int> test = {1, 451};
    vector<int> res = leaders(test);
    for(auto i = res.begin(); i != res.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
