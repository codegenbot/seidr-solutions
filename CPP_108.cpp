Here is the solution:

```cpp
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            num = -num; // convert to positive
            int sum = 0;
            bool hasNegative = false;
            while (num > 0) {
                int digit = num % 10;
                if (digit == 5 || digit == 6 || digit == 9)
                    hasNegative = true;
                else
                    sum += digit;
                num /= 10;
            }
            if (sum > 0 && !hasNegative)
                count++;
        }
    }
    return count;
}