int sumOfDivisors(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                sum += i;
                n /= i;
            }
        }
    }
    if (n > 1) {
        sum += n;
    }
    return sum;
}