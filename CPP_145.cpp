#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) {
        int temp = abs(num);
        while (temp) {
            sum_a += temp % 10;
            temp /= 10;
        }
    }
    for (int num : b) {
        int temp = abs(num);
        while (temp) {
            sum_b += temp % 10;
            temp /= 10;
        }
    }
    if (sum_a == sum_b) return a < b;
    return sum_a < sum_b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b){
        return issame(a, b);
    });
    return nums;
}