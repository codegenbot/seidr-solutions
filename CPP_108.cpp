int count_nums(std::vector<int> n) {
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
            int sum = 0;
            int abs_num = -num; // note the minus sign
            while (abs_num > 0) {
                sum += abs_num % 10;
                abs_num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}