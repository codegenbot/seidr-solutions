```
def modp(n: int, p: int):
    if n < 0:
        n += p
    gcd = lambda a, b: 1 if b == 0 else gcd(b, a % b)
    return pow(n, gcd(p-1, n), p)