#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> numPairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int n = nums[i];
        while (n > 0) {
            sumOfDigits += n % 10;
            n /= 10;
        }
        numPairs.push_back({sumOfDigits, i});
    }

    std::sort(numPairs.begin(), numPairs.end());

    std::vector<int> result;
    for (const auto& pair : numPairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}