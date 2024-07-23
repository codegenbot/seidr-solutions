int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            int abs_num = num;
            while (abs_num > 0) {
                sum += abs_num % 10;
                abs_num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, i = 1;
            int abs_num = num;
            while (abs_num != 0) {
                if ((abs_num / i) % 10 < 0) {
                    sum -= (abs_num / i) % 10;
                } else {
                    sum += (abs_num / i) % 10;
                }
                i *= 10;
                abs_num /= i;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}