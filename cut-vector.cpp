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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/


void findBestCut(vector<int> nums){
    int low=0;
    int high = INT_MAX;
    int currSum = 0;
    for(int i = 0; i < nums.size(); i++){
        currSum += nums[i];
    }
    int leftSum = 0;
    for(int i = 0; i < nums.size(); i++){
        currSum -= nums[i];
        if(abs(currSum - leftSum) < abs(high - low)){
            low = leftSum;
            high = currSum;
        }
        leftSum += nums[i];
    }
    cout<<low<<" "<<high<<endl;
}

vector<int> findBestCut2(vector<int> nums){
    int low=0;
    int high = INT_MAX;
    int currSum = 0;
    for(int i = 0; i < nums.size(); i++){
        currSum += nums[i];
    }
    int leftSum = 0;
    vector<int> res;
    for(int i = 0; i < nums.size(); i++){
        currSum -= nums[i];
        if(abs(currSum - leftSum) < abs(high - low)){
            low = leftSum;
            high = currSum;
        }
        leftSum += nums[i];
    }
    int i = 0;
    while(nums[i] != low && i < nums.size()){
        res.push_back(nums[i]);
        i++;
    }
    res.push_back(0);
    while(i < nums.size()){
        res.push_back(nums[i]);
        i++;
    }
    return res;
}


int main() {
    vector<int> nums = {1,10};
    findBestCut(nums);
    vector<int> res = findBestCut2(nums);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    vector<int> nums1 = {1,100};
    findBestCut(nums1);
    vector<int> res1 = findBestCut2(nums1);
    for(int i = 0; i < res1.size(); i++){
        cout<<res1[i]<<" ";
    }
    cout<<endl;
    vector<int> nums2 = {1,1000};
    findBestCut(nums2);
    vector<int> res2 = findBestCut2(nums2);
    for(int i = 0; i < res2.size(); i++){
        cout<<res2[i]<<" ";
    }
    cout<<endl;
    vector<int> nums3 = {1,10000};
    findBestCut(nums3);
    vector<int> res3 = findBestCut2(nums3);
    for(int i = 0; i < res3.size(); i++){
        cout<<res3[i]<<" ";
    }
    cout<<endl;
    vector<int> nums4 = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    findBestCut(nums4);
    vector<int> res4 = findBestCut2(nums4);
    for(int i = 0; i < res4.size(); i++){
        cout<<res4[i]<<" ";
    }
    cout<<endl;
    return 0;
}
