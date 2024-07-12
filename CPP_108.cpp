#include <iostream>

int count_nums(int* nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] >= 0) {
            int sum = 0;
            while (nums[i] > 0) {
                sum += abs(nums[i] % 10);
                nums[i] /= 10;
            }
            if (sum % 2 != 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            while (nums[i] < 0) {
                sum += abs(nums[i] % 10);
                nums[i] /= 10;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        }
    }
    return count;
}

int main() {
    int nums[] = {123, -456, 789, -9012};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = count_nums(&nums[0], size);
    std::cout << "The number of positive integers with an odd digital root is: " << result << std::endl;
    assert (count_nums(&nums[0], 1) == 1); 
    return 0;
}