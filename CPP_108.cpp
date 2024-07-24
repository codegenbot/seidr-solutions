```cpp
#include <vector>

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
            }
            if (sum > 0) count++;
        } else {
            int sum = 0, sign = -1;
            int n = abs(num);
            while (n > 0) {
                int digit = n % 10;
                sum += sign * digit;
                n /= 10;
                sign = 1;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}