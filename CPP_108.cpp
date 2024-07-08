#include <vector>

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            bool hasNegative = false;
            while (num > 0 || hasNegative) {
                int digit = num % 10;
                if (!hasNegative && digit < 0) {
                    hasNegative = true;
                    digit = -digit;
                }
                num /= 10;
            }
        } else {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}