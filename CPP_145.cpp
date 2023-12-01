#include <vector>
#include <utility>
#include <algorithm>
#include <cassert>
#include <cmath>

bool issame_vectors(std::vector<int> a, std::vector<int> b){
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

std::vector<int> order_by_points(std::vector<int> nums);

int main(){
    assert (issame_vectors(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}

std::vector<int> order_by_points(std::vector<int> nums){
    std::vector<std::pair<int, int>> sums;
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = std::abs(nums[i]);
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        sums.push_back(std::make_pair(sum, i));
    }
    std::sort(sums.begin(), sums.end());
    std::vector<int> result;
    for(auto p : sums){
        result.push_back(nums[p.second]);
    }
    return result;
}