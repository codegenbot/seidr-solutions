```
def modp(n: int, p: int):
    if n < 0:
        n += p
    gcd = lambda a, b: 2*a if not b else gcd(b, a%b)
    return pow(n, p - 2 * gcd(n, p), p)