int count = 0;
    for (int num : n) {
        int sum = 0;
        if (num < 0) {
            sum += -1;
            num *= -1;
        }
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}