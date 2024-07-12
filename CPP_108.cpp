```c
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
    int singleNum = 123; 
    int nums[] = {singleNum}; 
    int size = 1; 
    std::cout << "The number of positive integers with an odd digital root is: " << count_nums(&nums[0], size) << std::endl;
    assert (count_nums(nums, 1) == 1); 
    return 0;
}