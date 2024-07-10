int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            num = -num; // convert negative number to positive
            int sum = 0;
            bool isNegative = true;
            while (num > 0) {
                if (isNegative) {
                    sum -= num % 10;
                    isNegative = false;
                } else {
                    sum += num % 10;
                }
                num /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}