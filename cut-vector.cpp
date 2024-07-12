#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

int main() {
    std::vector<int> nums;
    int n, cutIndex;
    std::vector<int> firstSubvector, secondSubvector;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    int minDiff = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(std::accumulate(nums.begin(), nums.begin() + i + 1, 0) - std::accumulate(nums.begin() + i + 1, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    firstSubvector = std::vector<int>(nums.begin(), nums.begin() + cutIndex + 1);
    secondSubvector = std::vector<int>(nums.begin() + cutIndex + 1, nums.end());

    for (int num : firstSubvector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : secondSubvector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}