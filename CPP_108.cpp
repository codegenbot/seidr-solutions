Here is the completed code:

```cpp
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum_of_digits = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                if (digit != 0) {
                    sum_of_digits += digit;
                }
                n /= 10;
            }
            if (sum_of_digits > 0) {
                count++;
            }
        } else {
            num = -num; // make it positive
            int sum_of_digits = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                if (digit != 0) {
                    sum_of_digits += digit;
                }
                n /= 10;
            }
            if (sum_of_digits > 0) {
                count++;
            }
        }
    }
    return count;
}