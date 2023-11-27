#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

float getMedian(std::vector<float> nums){
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    if (n % 2 == 0){
        return (nums[n/2 - 1] + nums[n/2]) / 2.0;
    }
    else{
        return nums[n/2];
    }
}

int main(){
    // Test the getMedian function
    assert(std::abs(getMedian({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4);

    return 0;
}