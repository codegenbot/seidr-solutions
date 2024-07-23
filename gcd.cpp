long long gcd(long long a, long long b) {
    if (a == 0 && b == 0)
        return 0;
    else if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}