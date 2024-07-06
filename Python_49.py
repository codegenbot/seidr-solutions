```
def modp(n: int, p: int):
    return pow(n % p, -1, p) if n > 0 else 1 if n == 0 else 1