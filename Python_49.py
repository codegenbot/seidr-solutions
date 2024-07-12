```
def modp(n: int, p: int):
    return pow(n, p-1, p) * n % p if gcd(p, n) == 1 else None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a