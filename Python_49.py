def modp(n: int, p: int):
    if gcd(n, p) != 1:
        raise ValueError("No modular inverse exists")

    def extended_gcd(a, b):
        if a == 0:
            return b, 0, 1
        else:
            gcd, x, y = extended_gcd(b % a, a)
            return gcd, y - (b // a) * x, x

    gcd, x, _ = extended_gcd(p, n)
    return pow(n, p - 2, p) * n % p