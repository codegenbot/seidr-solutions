```
def modp(n: int, p: int):
    if p == 2:
        return n % p
    if n < p:
        return pow(n, p - 1, p) * n % p if (p - 1) % 2 else 1
    if gcd(n, p) > 1:
        return modp(n % p, p)
    return 1

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a