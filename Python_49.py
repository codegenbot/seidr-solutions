```
def modp(n: int, p: int):
    if p % 2 == 0:
        return pow(n, p // 2, p) ** 2 % p
    else:
        return pow(n, p - 1, p) * n % p