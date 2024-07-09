int sumOfSums(int n) {
    int totalSum = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        int num = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        totalSum += sum;
    }
    return totalSum;
}