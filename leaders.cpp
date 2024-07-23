#include <iostream>
#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    leaders.push_back(maxRight);
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int num;
    std::vector<int> input;

    while (std::cin >> num) {
        input.push_back(num);
    }

    std::vector<int> leaders = findLeaders(input);

    for (int leader : leaders) {
        std::cout << leader << " ";
    }

    return 0;
}