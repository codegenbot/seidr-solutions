#include <vector>

int specialFilter(const std::vector<int>& nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string num_str = std::to_string(std::abs(num));
            if (num_str.front() % 2 != 0 && num_str.back() % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {15, -23, 8, 42, 17};
    int result = specialFilter(nums);
    return 0;
}