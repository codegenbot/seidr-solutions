Here is the solution:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            while (num != 0) {
                int digit = abs(num % 10);
                sum += digit;
                num /= 10;
            }
            if (sum > 0) count++;
        } else {
            bool negative = false;
            int sum = 0;
            while (num != 0) {
                int digit = abs(num % 10);
                if (!negative && digit == 1) negative = true;
                sum += (digit - (negative ? 2 : 0));
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;