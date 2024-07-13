```cpp
#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if(i == 0) sum = nums[i];
        else sum += nums[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {1, -3, 2, -5};
    int result = basement(nums);
    if(result == -1) {
        std::cout << "No such index found";
    } else {
        std::cout << "First index where sum becomes negative is: " << result;
    }
    return 0;
}