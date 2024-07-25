int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 0) {
            int sum_of_digits = 0;
            do {
                sum_of_digits += abs(num) % 10;
                num /= 10;
            } while (num);
            if (sum_of_digits > 0)
                count++;
        }
    }
    return count;
}