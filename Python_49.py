```
def modp(n: int, p: int):
    return pow(gcd(p-1, n), -1, p)