int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // Return a, because if 'a' is 1 then GCD has been found.
}