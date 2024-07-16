#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

bool compare(int a, int b) {
    int sum_a = accumulate(to_string(abs(a)).begin(), to_string(abs(a)).end(), 0,
                           [](int acc, char c) { return acc + (c - '0'); });
    int sum_b = accumulate(to_string(abs(b)).begin(), to_string(abs(b)).end(), 0,
                           [](int acc, char c) { return acc + (c - '0'); });
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}