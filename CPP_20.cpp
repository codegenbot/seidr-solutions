#include <algorithm>
#include <vector>
#include <cmath>

bool issame(const std::vector<float>& nums) {
    if(nums.size() <= 1)
        return false;
    for(int i = 0; i < nums.size()-1; ++i){
        if(abs(nums[i] - nums[i+1]) > 0.000001)
            return false;
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    
    float min_diff = numeric_limits<float>::max();
    std::pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (numbers[i+1] - numbers[i] < min_diff) {
            min_diff = numbers[i+1] - numbers[i];
            closest_pair.first = numbers[i];
            closest_pair.second = numbers[i+1];
        }
    }

    return {closest_pair.first, closest_pair.second};
}