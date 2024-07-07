int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            long sum = 0;
            long temp = abs(num);
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            long sum = 0;
            long temp = -num;
            bool is_negative = true;
            while (temp > 0) {
                if (!is_negative && temp % 10 != 0)
                    sum += temp % 10;
                else if (is_negative && temp % 10 < 0)
                    sum -= temp % 10;
                temp /= 10;
                is_negative = !is_negative;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}