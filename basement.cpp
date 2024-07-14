#include <vector>
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
    std::vector<int> nums = {10, 4, -8, 8};
    int result = basement(nums);
    if(result == -1) std::cout << "No such index found.\n";
    else std::cout << "First index is: " << result << "\n";
    return 0;
}