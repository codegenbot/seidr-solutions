int gcd(int a, int b) {
    if (a == 0 && b == 0)
        return 1;
    else if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}