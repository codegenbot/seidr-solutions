#include <algorithm>
#include <vector>
#include <iostream>
#include <initializer_list>

namespace std {
using namespace std;
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

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({nums[i], i});
    }

    std::sort(pairs.begin(), pairs.end());

    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    using namespace std;
    vector<int> nums = {0,6,6,-76,-21,23,4};
    vector<int> result = order_by_points(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}