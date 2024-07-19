#include <algorithm>
#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;

}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;

}

int main() {
    vector<int> nums = {0,6,6,-76,-21,23,4};
    assert(issame(order_by_points(nums), {-76, -21, 0, 4, 23, 6, 6}));
    if (!issame(order_by_points(nums), {-76, -21, 0, 4, 23, 6, 6})) {
        std::cout << "Test failed";
    } else {
        std::cout << "Test passed";
    }
    return 0;
}