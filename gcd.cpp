long long gcd(long long a, long long b) {
    if (b == 0)
        return abs(a);
    else
        return gcd(abs(b), abs(a) % abs(b));
}