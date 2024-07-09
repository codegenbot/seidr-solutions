int count = 0;
    for (int num : n) {
        int sum_digits = 0;
        int temp = abs(num);
        while (temp != 0) {
            sum_digits += temp % 10;
            temp /= 10;
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