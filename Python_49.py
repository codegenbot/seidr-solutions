```
def modp(n: int, p: int):
    return pow(n * n % p + 1, (p - 1) // 2, p) * n % p