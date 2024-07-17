```c++
#include <vector>
#include <algorithm>

int basement(std::vector<int>& nums) {
    int minIndex = -1;
    for (int i = 0; i < nums.size(); i++) {
        int total = std::accumulate(nums.begin(), nums.begin() + i + 1, 0);
        if(total < 0 && minIndex == -1)
            minIndex = i;
    }
    return minIndex + 1;

}

int main() {
    std::vector<int> nums = {17,12,77,-31,85,-34,52,77,67,-81,-43,-2,-63,-58,-45,-44,-70};
    int result = basement(nums);
    return 0;
}