int largestPrimeFactor = 2;
    while (n > largestPrimeFactor) {
        if (n % largestPrimeFactor == 0) {
            n /= largestPrimeFactor;
        } else {
            largestPrimeFactor++;
        }
    }
    return largestPrimeFactor;
}