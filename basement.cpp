```
#include <vector>

int main() {
    int result = basement({-1,-2,-3,-4,-5});
    return 0;
}

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) 
            return i + 1;
        else if (sum == 0)
            sum = 0;
    }
    return -1; // return -1 if no such index exists
}