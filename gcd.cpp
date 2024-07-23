long long gcd(long long a, long long b) {
    if (a == 0 && b == 0)
        return 0;
    else if (b == 0)
        return a;
    else if (a % 2 == 0 && b % 2 == 0)
        return 2 * gcd(a / 2, b / 2);
    else if (a % 2 == 0)
        return gcd(a / 2, b);
    else if (b % 2 == 0)
        return gcd(a, b / 2);
    else
        return gcd(b, a % b);
}