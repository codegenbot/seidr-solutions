```
def modp(n: int, p: int):
    if p == 2:
        return n % p
    return pow(n, (p - 1) // 2, p) * n % p if ((p - 1) // 2) & 1 else pow(n, p - 1, p) % p