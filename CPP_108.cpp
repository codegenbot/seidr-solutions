Here is the completed code:

```
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            int sign = -1;
            num = -num;
        } else {
            int sign = 1;
        }
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += sign * digit;
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}