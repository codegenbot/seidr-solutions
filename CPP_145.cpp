#include <algorithm>
#include <string>
#include <vector>
#include <cassert>

bool compare(int a, int b) {
    int sum_a = 0, sum_b = 0;
    std::string str_a = std::to_string(a);
    std::string str_b = std::to_string(b);
    
    for (char c : str_a) {
        if (c != '-') {
            sum_a += c - '0';
        }
    }
    
    for (char c : str_b) {
        if (c != '-') {
            sum_b += c - '0';
        }
    }
    
    if (sum_a == sum_b) {
        return a < b;
    }
    
    return sum_a < sum_b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}