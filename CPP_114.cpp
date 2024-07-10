#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int minSubArraySum(vector<int> nums){
    int min_sum = nums[0];
    int current_sum = 0;
    
    for (int num : nums) {
        current_sum = min(num, current_sum + num);
        min_sum = min(min_sum, current_sum);
    }
    
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    
    return 0;
}