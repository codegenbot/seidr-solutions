```
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    int count = specialFilter(nums);

    std::cout << "Count of filtered numbers: " << count << std::endl;

    return 0;
}

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && abs(num) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}