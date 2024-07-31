#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return unordered_set<int>(a.begin(), a.end()) == unordered_set<int>(b.begin(), b.end());
}

vector<int> order_by_points(const vector<int>& nums) {
    vector<int> sorted_nums = nums;
    sort(sorted_nums.begin(), sorted_nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        if (sum_a == sum_b) {
            return b < a; // Sorting in reverse order of sum of digits
        }
        return sum_b < sum_a; // Sorting in reverse order of sum of digits
    });
    return sorted_nums;
}

int main() {
    assert(issame(order_by_points(vector<int>({0, 6, 6, -76, -21, 23, 4})), vector<int>({-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}