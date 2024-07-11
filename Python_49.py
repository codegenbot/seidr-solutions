```
def modp(n: int, p: int):
    return pow(n, p - 2) * n * pow(n, 1, p) % p