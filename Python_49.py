```
def modp(n: int, p: int):
    return pow(n * n % p, (p - 2) // 2, p)