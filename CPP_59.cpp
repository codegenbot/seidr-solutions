int largest_prime_factor(int n){
    int maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }
    if (n > 2) {
        maxPrime = n;
    }
    return maxPrime;
}