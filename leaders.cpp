#include <iostream>
#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxLeader = nums[n - 1];
    leaders.push_back(maxLeader);

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    return leaders;
}

int main() {
    int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter the elements of the vector:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> leaders = findLeaders(nums);

    std::cout << "The leaders in the vector are: ";
    for (int i = 0; i < leaders.size(); i++) {
        std::cout << leaders[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}