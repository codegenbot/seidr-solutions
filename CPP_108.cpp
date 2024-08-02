#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool hasPositiveSum = false;
        long absNum = labs(num);
        while (absNum > 0) {
            int digit = absNum % 10;
            if (digit != 0 || num < 0) {
                hasPositiveSum = true;
                break;
            }
            absNum /= 10;
        }
        if (hasPositiveSum) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}