#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> order_by_points(vector<int> nums){
    vector<int> result;
    vector<pair<int, int>> sums;
    
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = nums[i];
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        sums.push_back(make_pair(sum, i));
    }
    
    sort(sums.begin(), sums.end());
    
    for(int i=0; i<sums.size(); i++){
        result.push_back(nums[sums[i].second]);
    }
    
    return result;
}