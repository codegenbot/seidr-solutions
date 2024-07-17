#include <iostream>
#include <vector>
#include <numeric>

int basement(const std::vector<int>& nums) {
    int sum = 0, min_sum = 0, index = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
            index = i;
        }
    }
    return index + 1;
}

int main() {
    std::vector<int> nums;
    int num;
    char c;
    while (std::cin >> num) {
        nums.push_back(num);
        c = std::cin.get(); // Consume the space character
        if (c == '\n') {
            break; // Exit loop if newline is encountered
        }
    }
    std::cout << basement(nums) << std::endl;
    return 0;
}