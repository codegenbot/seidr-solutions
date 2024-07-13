#include <vector>
#include <iostream>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (sum <= 0) sum += nums[i];
        else return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {2, -3, 4, -1};
    std::cout << "The basement index is: " << basement(numbers) << std::endl;
    return 0;
}