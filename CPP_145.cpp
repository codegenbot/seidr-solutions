#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && (std::equal(a.begin(), a.end(), b.begin()));
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int sumOfDigitsVal = sumOfDigits(num);
        pairs.push_back({sumOfDigitsVal, i});
    }

    std::sort(pairs.begin(), pairs.end());

    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

int main() {
    std::vector<int> nums = {0,6,6,-76,-21,23,4};
    std::cout << "Sorted array: ";
    for(int num : order_by_points(nums)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}