#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) {
        int temp_a = abs(num);
        while (temp_a) { sum_a += temp_a % 10; temp_a /= 10; }
    }
    for (int num : b) {
        int temp_b = abs(num);
        while (temp_b) { sum_b += temp_b % 10; temp_b /= 10; }
    }
    if (sum_a == sum_b) return a < b;
    return sum_a < sum_b;
}

void order_by_points(vector<vector<int>>& nums) {
    sort(nums.begin(), nums.end(), [](vector<int> a, vector<int> b){
        return issame(a, b);
    });
}