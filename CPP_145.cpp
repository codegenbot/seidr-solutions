#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

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

vector<int> order_by_points(const vector<int>& nums) {
    if (nums.empty()) {
        return nums;
    }
    
    vector<pair<int, int>> sums;
    for (const int& num : nums) {
        int sum = 0;
        int abs_num = abs(num);
        while (abs_num > 0) {
            sum += abs_num % 10;
            abs_num /= 10;
        }
        sums.push_back(make_pair(sum, num));
    }
    
    sort(sums.begin(), sums.end());
    vector<int> result;
    for (const auto& pair : sums) {
        result.push_back(pair.second);
    }
    return result;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), vector<int>({-76, -21, 0, 4, 23, 6, 6})));

    return 0;
}