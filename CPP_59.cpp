int largest_prime_factor(int n){
    int largestPrime = 2;
    while (n > largestPrime){
        if (n % largestPrime == 0){
            n /= largestPrime;
        } else {
            largestPrime++;
        }
    }
    return largestPrime;
}