```
def modp(n: int, p: int):
    if p <= 2:
        return pow(n, -1, p)
    else:
        return pow(n, p - 2, p) * n % p