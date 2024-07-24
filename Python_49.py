```
def modp(n: int, p: int):
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a
    def extended_gcd(a, b):
        if a == 0:
            return b, 0, 1
        else:
            g, y, x = extended_gcd(b, a % b)
            return g, x - (b // a) * y, y

    g, x, _ = extended_gcd(n, p)
    if g != 1:
        return None
    return pow(n, -1, p) * n % p