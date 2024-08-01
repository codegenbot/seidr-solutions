#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num % 10) % 2 != 0 || (num / 10) % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> nums.push_back(i);
    }
    int result = specialFilter(nums);
    std::cout << "Number of elements that satisfy the condition: " << result;
    return 0;
}