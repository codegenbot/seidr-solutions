```
def modp(n: int, p: int):
    return pow(n, p-2, p) * n % p if pow(2, p-1, p) == 1 else None