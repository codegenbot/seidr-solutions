```
def modp(n: int, p: int):
    return ((pow(n, (p - 2) * 1, p)) * n) % p