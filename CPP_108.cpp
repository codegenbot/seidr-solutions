int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                temp /= 10;
                if (digit > 0) {
                    sum += digit;
                }
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; // Convert negative number to positive
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                temp /= 10;
                if (digit > 0) {
                    sum += digit;
                } else if (digit == -1) {
                    sum -= 9; // Subtract 9 for negative sign
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}