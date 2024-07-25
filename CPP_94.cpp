int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int skjkasdkd(vector<int> lst) {
    int max_prime = -1;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > max_prime) {
                max_prime = num;
            }
        }
    }
    if (max_prime == -1) {
        return 0;
    } else {
        return sum_of_digits(max_prime);
    }
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}