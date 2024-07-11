int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum_of_digits = 0;
            int temp = num;
            while (temp > 0) {
                sum_of_digits += temp % 10;
                temp /= 10;
            }
            if (sum_of_digits > 0)
                count++;
        } else {
            int sum_of_digits = 0;
            int temp = abs(num);
            bool is_negative = true;
            while (temp > 0) {
                if (!is_negative && temp % 10 != 0)
                    sum_of_digits += temp % 10;
                else
                    sum_of_digits -= temp % 10;
                temp /= 10;
            }
            if (sum_of_digits > 0)
                count++;
        }
    }
    return count;
}