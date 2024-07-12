```
def modp(n: int, p: int):
    def egcd(a, b):
        if a == 0:
            return b, 0, 1
        else:
            gcd, y, x = egcd(b % a, a)
            return gcd, y - (b // a) * x, x

    g, y, _ = egcd(n, p)
    return y % p if g == 1 else None