#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> order_by_points(vector<int> nums){
    if(nums.empty()){
        return nums;
    }
    vector<pair<int, int>> sums;
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = abs(nums[i]);
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        sums.push_back(make_pair(sum, i));
    }
    sort(sums.begin(), sums.end());
    vector<int> result;
    for(int i=0; i<sums.size(); i++){
        result.push_back(nums[sums[i].second]);
    }
    return result;
}