#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int size, num;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    nums.resize(size);

    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        nums[i] = num;
    }

    int count = specialFilter(nums);
    std::cout << "The count is: " << count << std::endl;

    return 0;
}