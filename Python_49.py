```
def modp(n: int, p: int):
    return pow(n, p - 2, p) * n % p if gcd(n, p) == 1 else None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a