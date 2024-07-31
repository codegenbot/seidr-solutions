Here is the completed code:

int skjkasdkd(vector<int> lst) {
    int max_prime = 0;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > max_prime) {
                max_prime = i;
            }
        }
    }
    int sum_digits = 0;
    while (max_prime) {
        sum_digits += max_prime % 10;
        max_prime /= 10;
    }
    return sum_digits;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}