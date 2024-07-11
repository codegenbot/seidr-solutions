#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    long long sum = 0;
    int negIndex = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            negIndex = i;
            break;
        }
    }
    return negIndex;
}

int main() {
    int n;
    std::vector<int> nums;

    std::cout << "Enter the number of integers in the vector: ";
    std::cin >> n;

    std::cout << "Enter the integers: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    int result = basement(nums);
    std::cout << "The first index with negative sum is: " << result << std::endl;

    return 0;
}