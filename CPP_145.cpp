#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

struct order_by_points {
    std::vector<int> nums;
    order_by_points(std::vector<int> n) : nums(n) {
    }
    
    bool operator()(int a, int b) const {
        auto calculate_sum = [](int num) {
            int sum = 0;
            int temp = abs(num);
            while (temp) {
                sum += temp % 10;
                temp /= 10;
            }
            return sum;
        };
        
        int sum_a = std::accumulate(nums.begin(), nums.end(), 0, [&](int acc, int num) { return acc + calculate_sum(num); });
        int sum_b = std::accumulate(nums.begin(), nums.end(), 0, [&](int acc, int num) { return acc + calculate_sum(num); });
        
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    }
};

int main() {
    std::vector<int> nums = {0, 6, 6, -76, -21, 23, 4};
    sort(nums.begin(), nums.end(), order_by_points(nums));
    
    for (int num : nums) {
        std::cout << num << " ";
    }
    
    assert(std::is_sorted(nums.begin(), nums.end(), order_by_points(nums)) && "Sorting failed");
    
    return 0;
}