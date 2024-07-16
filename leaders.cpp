#include <vector>
#include <algorithm>

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
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    std::vector<int> nums = {20, 389, 236, 116, 162, 482, 425, 952, 233, 398, 250, 448, 692, 303, 311, 662, 467, 67, 51, 991, 806};
    std::vector<int> result = findLeaders(nums);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}