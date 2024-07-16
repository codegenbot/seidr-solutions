#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    if (nums.empty()) {
        return leaders;
    }
    
    int n = nums.size();
    int maxLeader = nums[n - 1];
    leaders.push_back(maxLeader);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    // Add your test cases here if needed
    return 0;
}