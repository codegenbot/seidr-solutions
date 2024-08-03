Here is the completed code:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool isNegative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 0) continue;
                if (isNegative) sum -= digit;
                else sum += digit;
                num /= 10;
                if (num < 0) isNegative = true;
            }
            if (sum > 0) count++;
        } else {
            int sum = 0;
            bool isNegative = true;
            while (num != 0) {
                int digit = abs(num) % 10;
                num /= 10;
                if (digit == 5 || digit == 0) continue;
                if (isNegative) sum -= digit;
                else sum += digit;
                if (num < 0) isNegative = false;
            }
            if (sum > 0) count++;
        }
    }
    return count;