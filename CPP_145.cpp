#include <algorithm>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

bool compare(int a, int b) {
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
        return a < b;
    }

    return sum_a < sum_b;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}