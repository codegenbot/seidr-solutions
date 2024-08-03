#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int numCount;
    std::cin >> numCount;

    for (int i = 0; i < numCount; ++i) {
        int n;
        std::cin >> n;
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num / 3 - 2;
    }

    std::cout << sum << std::endl;

    return 0;
}