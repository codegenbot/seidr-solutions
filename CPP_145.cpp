#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int,int>> pairs;
    for(int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while(num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for(auto pair : pairs) {
        if(pair.second >= 0) {
            result.push_back(nums[pair.second]);
        } else {
            result.push_back(-nums[-pair.second-1]);
        }
    }
    return result;
}