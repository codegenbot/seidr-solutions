#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::vector<int> findLeaders(const std::vector<int> &nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n - 1];
    leaders.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    std::vector<int> nums;
    std::string input;
    do {
        getline(std::cin, input);
        if (input.empty()) {
            break;
        }
        nums.push_back(std::stoi(input));
    } while (true);

    if (nums.empty()) {
        std::cout << "No numbers entered." << std::endl;
        return 1;
    }

    std::vector<int> result = findLeaders(nums);

    for (int leader : result) {
        std::cout << leader << " ";
    }

    return 0;
}