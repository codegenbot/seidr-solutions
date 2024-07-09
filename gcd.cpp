int gcd(int a, int b) {
    if (b == 0) {
        return abs(a);
    }
    return gcd(b, abs(a) % abs(b));
}