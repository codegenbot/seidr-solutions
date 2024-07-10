#include <vector>
#include <algorithm>

class std::vector<int> {
public:
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return *this == a && *this == b;
    }
};

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.emplace_back(sum, i);
    }
    std::sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    std::vector<int> res = order_by_points(nums);
    // Check the result
    return 0;
}