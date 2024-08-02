def modp(n: int, p: int):
    def extended_gcd(a, b):
        if a == 0:
            return b, 0, 1
        else:
            g, y, x = extended_gcd(b % a, a)
            return g, x - (b // a) * y, y

    gcd, x, _ = extended_gcd(n, p)
    if gcd != 1 or p <= 1:
        return 0
    return pow(n, p - 2, p) * n % p