#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    if (nums.empty()) {
        return nums;
    }
    std::vector<std::pair<int, int>> sums;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = std::abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        sums.push_back(std::make_pair(sum, i));
    }
    std::sort(sums.begin(), sums.end());
    std::vector<int> result;
    for (int i = 0; i < sums.size(); i++) {
        result.push_back(nums[sums[i].second]);
    }
    return result;
}

int main() {
    std::vector<int> expected = {-76, -21, 0, 4, 23, 6, 6};
    std::vector<int> actual = order_by_points({0, 6, 6, -76, -21, 23, 4});

    std::cout << "Expected Output: ";
    for (int i = 0; i < expected.size(); i++) {
        std::cout << expected[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Actual Output: ";
    for (int i = 0; i < actual.size(); i++) {
        std::cout << actual[i] << " ";
    }
    std::cout << std::endl;

    if (issame(actual, expected)) {
        std::cout << "Test case passed" << std::endl;
    } else {
        std::cout << "Test case failed" << std::endl;
    }

    return 0;
}