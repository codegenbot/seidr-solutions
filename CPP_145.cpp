#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;

vector<int> order_by_points(vector<int> nums){
    vector<pair<int,int>> numPairs;
    
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int n = nums[i];
        while(n > 0) {
            sumOfDigits += n % 10;
            n /= 10;
        }
        numPairs.push_back({sumOfDigits, i});
    }
    
    sort(numPairs.begin(), numPairs.end());
    
    vector<int> result;
    for (int i = 0; i < numPairs.size(); i++) {
        result.push_back(nums[numPairs[i].second]);
    }
    
    return result;
}