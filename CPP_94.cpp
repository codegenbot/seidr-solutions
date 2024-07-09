int sumOfDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}

int sumOfDivisors(int n) {
    int count = 1; // Include 1 in the count
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }
    if (sqrt(n) == floor(sqrt(n))) // Check for perfect squares
        return count - 1;
    return count;