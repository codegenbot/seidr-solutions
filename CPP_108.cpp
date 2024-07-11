Here is the completed code:

```cpp
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0) {
                has_positive_sum = true;
            }
        } else {
            int sum = 0, sign = 1;
            int temp = abs(num);
            while (temp != 0) {
                sum += (temp % 10) * sign;
                temp /= 10;
                if (sign == -1 && temp == 0) {
                    break;
                }
                sign *= (-1);
            }
            if (sum > 0) {
                has_positive_sum = true;
            }
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}