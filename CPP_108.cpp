Here is the completed code:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += abs(num % 10);
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, sign = -1;
            do {
                sum += abs(num % 10) * sign;
                num /= 10;
                if (num == 0) break;
                sign = 1;
            } while (true);
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;