def modp(n: int, p: int):
    def extended_gcd(a, b):
        if a == 0:
            return b, 0, 1
        else:
            gcd, y, x = extended_gcd(b % a, a)
            return gcd, y - (b // a) * x, x

    gcd, x, _ = extended_gcd(n, p)
    if gcd != 1:
        raise ValueError("n and p are not coprime")
    return pow(n, p - 2, p) * x % p