#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Example usage:
    std::vector<int> numbers = {1, -3, 2, 1, -1};
    int result = basement(numbers);
    return 0;
}