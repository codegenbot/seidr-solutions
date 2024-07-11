Here is the completed code:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum = 0;
        bool has_positive_sum = false;
        if (num < 0) {
            while (abs(num) > 0) {
                int digit = abs(num) % 10;
                if (digit != 0 || num < 0) {
                    sum += (num >= 0 ? 1 : -1) * digit;
                    has_positive_sum = true;
                }
                num /= 10;
            }
        } else {
            while (num > 0) {
                int digit = num % 10;
                if (digit != 0) {
                    sum += digit;
                    has_positive_sum = true;
                }
                num /= 10;
            }
        }
        if (has_positive_sum && sum > 0) {
            count++;
        }
    }
    return count;