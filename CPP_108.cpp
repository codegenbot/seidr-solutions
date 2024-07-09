Here is the completed code:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum_of_digits = 0;
            int temp = num;
            while (temp != 0) {
                sum_of_digits += temp % 10;
                temp /= 10;
            }
            if (sum_of_digits > 0)
                count++;
        } else {
            int sum_of_digits = 0;
            int temp = -num;
            bool is_negative = true;
            while (temp != 0) {
                sum_of_digits += temp % 10;
                temp /= 10;
                if (sum_of_digits > 0)
                    is_negative = false;
            }
            if (is_negative && sum_of_digits <= 0 || !is_negative && sum_of_digits > 0)
                count++;
        }
    }
    return count;
}