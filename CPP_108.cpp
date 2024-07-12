```cpp
#include <iostream>
#include <cassert>

int count_nums(int* nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*nums >= 0) {
            int sum = 0;
            while (*nums > 0) {
                sum += abs(*nums % 10);
                *nums /= 10;
            }
            if (sum % 2 != 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            while (*nums < 0) {
                sum += abs(*nums % 10);
                *nums /= 10;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        }
    }
    return count;
}

int main() {
    int size;
    std::cout << "Enter the number of integers: ";
    std::cin >> size;

    int* nums = new int[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter integer # " << std::to_string(i + 1) << ": ";
        std::cin >> nums[i];
    }

    int count = count_nums(nums, size);
    delete[] nums;
    std::cout << "The number of positive integers with an odd digital root is: " << count << std::endl;
    assert (count == 1); 
    return 0;
}