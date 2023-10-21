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
vector<int> leaders(vector<int> nums) {
    int n = nums.size();
    vector<int> res;
    if(n == 0) return res;
    int max_num = nums[n-1];
    res.push_back(max_num);
    for(int i = n-2; i >= 0; i--) {
        if(nums[i] >= max_num) {
            max_num = nums[i];
            res.push_back(max_num);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> nums = {1, 451};
    vector<int> res = leaders(nums);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
