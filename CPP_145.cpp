#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> order_by_points(vector<int> nums){
    if(nums.empty()){
        return nums;
    }
    
    vector<pair<int, int>> sumDigits;
    
    for(int i=0; i<nums.size(); i++){
        int num = nums[i];
        int sum = 0;
        
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        
        sumDigits.push_back(make_pair(sum, i));
    }
    
    sort(sumDigits.begin(), sumDigits.end());
    
    vector<int> result;
    
    for(auto pair : sumDigits){
        result.push_back(nums[pair.second]);
    }
    
    return result;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
}