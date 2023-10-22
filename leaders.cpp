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
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        if(nums.size()==0)return {};
        int mx = -1;
        vector<int> ans;
        for(int i=nums.size()-1;i>=0;--i){
            if(nums[i]>=mx)mx=nums[i],ans.push_back(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> nums{1, 2, 4, 3, 4, 5, 6, 7};
    vector<int> ans = s.leaders(nums);
    for(auto& x:ans)cout<<x<<' ';
    cout<<endl;
    
    return 0;
}
