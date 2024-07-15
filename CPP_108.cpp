int count_nums(vector<int> n) {
        int count = 0;
        for (auto num : n) {
            int sum_digits = 0;
            int temp_num = abs(num);
            while (temp_num != 0) {
                sum_digits += temp_num % 10;
                temp_num /= 10;
            }
            if (sum_digits > 0) {
                count++;
            }
        }
        return count;
    }