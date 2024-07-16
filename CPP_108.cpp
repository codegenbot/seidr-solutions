int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum_digits = 0;
        int num_copy = abs(num);
        while (num_copy > 0) {
            sum_digits += num_copy % 10;
            num_copy /= 10;
        }
        if (num < 0) {
            sum_digits *= -1;
        }
        if (sum_digits > 0) {
            count++;
        }
    }
    return count;
}