int count = 0;
    for (int num : n) {
        int sum_digits = 0;
        int temp_num = num;
        while (temp_num != 0) {
            sum_digits += abs(temp_num % 10);
            temp_num /= 10;
        }
        if (sum_digits > 0) {
            count++;
        }
    }
    return count;
}