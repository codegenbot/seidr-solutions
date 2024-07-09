#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    int idx = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0 && idx == -1) { 
            idx = i;
        }
    }
    return idx;
}

int main() {
    return basement({-5, 1, -3, 4, -2});
}