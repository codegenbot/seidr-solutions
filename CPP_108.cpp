int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            long temp = abs(num);
            while (temp != 0) {
                if ((temp % 10) > 0)
                    count++;
                temp /= 10;
            }
        } else if (num < 0) {
            temp = -num;
            while (temp != 0) {
                if ((temp % 10) > 0)
                    count++;
                temp /= 10;
            }
        }
    }
    return count;
}