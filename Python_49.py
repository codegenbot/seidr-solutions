```
def modp(n: int, p: int):
    return pow(n, p-2, p) * (pow(2, p-1, p)) % p