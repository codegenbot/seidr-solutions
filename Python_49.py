```
def modp(n: int, p: int):
    if p == 1:
        return n
    return pow(n, p - 1, p) * n % p