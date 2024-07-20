Here is the completed code:

```cpp
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool has_negative_digit = false;
            while (num > 0) {
                int digit = num % 10;
                if (digit < 0) {
                    has_negative_digit = true;
                    break;
                }
                sum += digit;
                num /= 10;
            }
            if (!has_negative_digit && sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            bool first_negative = true;
            while (num < 0) {
                int digit = (-num) % 10;
                if (first_negative) {
                    has_negative_digit = true;
                    first_negative = false;
                } else {
                    sum += digit;
                }
                num /= 10;
            }
            if (!has_negative_digit && sum > 0) {
                count++;
            }
        }
    }
    return count;
}