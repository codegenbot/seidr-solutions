Here is the completed code:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                has_positive_sum = true;
            }
        } else {
            num = -num; // convert to positive for calculation
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 1) { // first signed digit is negative, so we need at least one more positive digit
                has_positive_sum = true;
            }
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;