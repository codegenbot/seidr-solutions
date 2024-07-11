```
def modp(n: int, p: int):
    if n < 0:
        n += p
    return pow(n, p - 2, p) * n % p