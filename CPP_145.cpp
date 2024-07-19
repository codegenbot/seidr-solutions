```cpp
#include <algorithm>
#include <vector>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
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
        pairs.push_back(std::make_pair(nums[i], sumOfDigits));
    }

    std::sort(pairs.begin(), pairs.end());

    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.first);
    }

    return result;
}

int main() {
    std::vector<int> result = order_by_points({0,6,6,-76,-21,23,4});
    assert(issame(result, {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}