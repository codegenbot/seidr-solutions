int count = 0;
    for (int num : n) {
        int sum_of_digits = 0;
        int temp = abs(num);
        while (temp != 0) {
            sum_of_digits += temp % 10;
            temp /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}