int count_nums(vector<int> n) {
    int count = 0;
    for (int i : n) {
        if (i < 0) {
            i *= -1; // make positive to check sum of digits later
        }
        int sum_of_digits = 0;
        while (i > 0) {
            sum_of_digits += i % 10;
            i /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}