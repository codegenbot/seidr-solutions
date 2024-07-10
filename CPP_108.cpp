int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int temp = abs(num);
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            int temp = -num;
            bool isNegative = true;
            while (temp > 0) {
                if (isNegative) {
                    if (temp % 10 < 0) {
                        break;
                    }
                    sum -= temp % 10;
                } else {
                    sum += temp % 10;
                }
                temp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}