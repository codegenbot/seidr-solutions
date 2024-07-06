```
def modp(n: int, p: int):
    return ((n ** (p - 2)) * n) % p