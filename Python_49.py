```
def modp(n: int, p: int):
    def egcd(a, b):
        if a == 0:
            return (b, 0)
        else:
            g, y = egcd(b % a, a)
            return (g, y - (b // a) * y)

    def modinv(a, m):
        g, y = egcd(a, m)
        if g != 1:
            return None
        else:
            return y % m

    inv = modinv(n, p)
    if inv is not None:
        return pow(n, p - 2, p) * n * inv % p
    else:
        return None