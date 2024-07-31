int count = 0;
    for (int num : n) {
        int sum_of_digits = 0;
        int tmp = num;
        while (tmp != 0) {
            sum_of_digits += abs(tmp % 10);
            tmp /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}