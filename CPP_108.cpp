#include <vector>
#include <assert.h>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            bool hasNegative = false;
            while (num > 0 || hasNegative) {
                int digit = num % 10;
                if (digit < 0) {
                    hasNegative = true;
                    digit = -digit;
                }
                if (!hasNegative) {
                    count++;
                }
                num /= 10;
            }
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}