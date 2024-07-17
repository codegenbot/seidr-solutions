#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int minIndex = -1;
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i + 1;
        else if (total > 0 && minIndex == -1) 
            minIndex = i + 1;  
    }
    return minIndex;

}

int main() {
    const std::vector<int> nums = {17,12,77,-31,85,-34,52,77,67,-81,-43,-2,-63,-58,-45,-44,-70};
    int result = basement(const_cast<vector<int>&>(nums));
    return 0;
}