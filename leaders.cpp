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
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for(int cur:nums){
            int left = 0, right = res.size();
            while(left<right){
                int mid = left+(right-left)/2;
                if(res[mid]<cur) left = mid+1;
                else right = mid;
            }
            if(right>=res.size()) res.push_back(cur);
            else res[right] = cur;
        }
        return res.size();
    }
};
int main() {
    Solution s;
    vector<int> nums;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    cout<<s.lengthOfLIS(nums)<<endl;
}
