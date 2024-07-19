#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;
    int temp_a, temp_b;
    for (int num : a) {
        temp_a = abs(num);
        while (temp_a) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
    }
    for (int num : b) {
        temp_b = abs(num);
        while (temp_b) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
    }
    if (sum_a == sum_b) return a < b;
    return sum_a < sum_b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b){
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a) { sum_a += temp_a % 10; temp_a /= 10; }
        while (temp_b) { sum_b += temp_b % 10; temp_b /= 10; }
        if (sum_a == sum_b) return a < b;
        return sum_a < sum_b;
    });
    return nums;
}