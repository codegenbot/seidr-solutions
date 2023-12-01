#include <algorithm>
#include <vector>
#include <numeric>

bool compare(int a, int b) {
    int sumA = std::accumulate(std::to_string(abs(a)).begin(), std::to_string(abs(a)).end(), 0,
                             [](int sum, char c) { return sum + (c - '0'); });
                             
    int sumB = std::accumulate(std::to_string(abs(b)).begin(), std::to_string(abs(b)).end(), 0,
                             [](int sum, char c) { return sum + (c - '0'); });
    
    if (sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main() {
    assert (issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}