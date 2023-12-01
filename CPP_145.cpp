#include <iostream>
#include <vector>
#include <algorithm>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    std::string strA = std::to_string(a);
    std::string strB = std::to_string(b);
    
    for (char c : strA) {
        if (c != '-') {
            sumA += c - '0';
        }
    }
    
    for (char c : strB) {
        if (c != '-') {
            sumB += c - '0';
        }
    }
    
    if (sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}