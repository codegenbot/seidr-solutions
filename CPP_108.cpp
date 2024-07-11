int count = 0;
    for (int num : n) {
        int abs_num = abs(num);
        int sum_of_digits = 0;
        while (abs_num != 0) {
            sum_of_digits += abs_num % 10;
            abs_num /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}