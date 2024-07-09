```cpp
#include <initializer_list>
#include <algorithm>
#include <pmr/vector>

bool issame(std::pmr_vector<int> a, std::pmr_vector<int> b) = delete;
std::vector<int> order_by_points(std::vector<int> nums);

bool issame(std::pmr_vector<int> a, std::pmr_vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::pmr_vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num != 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    std::sort(pairs.begin(), pairs.end());

    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}