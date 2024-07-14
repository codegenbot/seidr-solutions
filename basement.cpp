#include <vector>
#include <iostream>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> test({-3,2,-3,4,5,-12,7});
    int result = basement(test);
    std::cout << "The index is: " << result << std::endl;

    return 0;
}