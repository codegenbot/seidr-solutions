```
def modp(n: int, p: int):
    if n < 0:
        n += p
    gcd = lambda a, b: 1 if b == 0 else modp(b, a % b)
    return pow(n, gcd(p, n), p)