int count = 0;
    for (int num : n) {
        int sum_digits = 0;
        int num_temp = num;
        if (num_temp < 0) num_temp *= -1;
        while (num_temp > 0) {
            sum_digits += num_temp % 10;
            num_temp /= 10;
        }
        if (sum_digits > 0) {
            count++;
        }
    }
    return count;
}