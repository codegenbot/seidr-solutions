int count = 0;
    for (int num : n) {
        int sum = 0;
        int num_copy = num;
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        if (sum > 0 || (num_copy < 0 && sum == 0)) {
            count++;
        }
    }
    return count;
}