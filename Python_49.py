```
def modp(n: int, p: int):
    if p % 2 == 0:
        return pow(n, (p - 1) * ((p - 1) % p), p)
    else:
        return pow(n, (p - 2), p)