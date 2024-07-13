int gcd(int a, int b) {
    if (b == 0)
        return a;
    else if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}