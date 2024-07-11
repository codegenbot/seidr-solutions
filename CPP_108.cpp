int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = num;
        int sign = 1;
        if (num < 0) {
            sign = -1;
            temp *= -1;
        }
        while (temp != 0) {
            sum += sign * (temp % 10);
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}