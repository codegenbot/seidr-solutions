int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            int temp = -num;
            bool isNegative = true;
            while (temp != 0) {
                int digit = temp % 10;
                if (isNegative && digit == 5) {
                    break;
                }
                sum += digit;
                temp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}