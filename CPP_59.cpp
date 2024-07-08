int largest_prime_factor(int n){
    int largestFactor = 2;
    while (n > largestFactor) {
        if (n % largestFactor == 0) {
            n /= largestFactor;
        } else {
            largestFactor++;
        }
    }
    return largestFactor;
}