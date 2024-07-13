#include <iostream>
#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    if (nums.empty()) {
        return leaders;
    }

    int max = nums.back();
    leaders.push_back(max);

    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= max) {
            max = nums[i];
            leaders.push_back(max);
        }
    }

    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    std::vector<int> nums;
    int num;

    while (std::cin >> num || !std::cin.eof()) {
        if (std::cin.fail()) {
            break;
        }
        nums.push_back(num);
    }

    std::vector<int> leaders = findLeaders(nums);
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}