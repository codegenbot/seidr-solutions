```
def modp(n: int, p: int):
    return pow(n, -1, p) * n % p if n > 0 else 1