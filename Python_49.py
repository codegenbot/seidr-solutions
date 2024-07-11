```
def modp(n: int, p: int):
    if p == 1:
        return 0
    else:
        return pow(n, (p - 1) // 2, p) * n * pow(n, (p - 1) // 2, p) % p