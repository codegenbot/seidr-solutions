```
def modp(n: int, p: int):
    if p % 2 == 0:
        return pow(n, (p - 2) // 2, p) * n * n % p
    else:
        return pow(n, p - 2, p) * n % p