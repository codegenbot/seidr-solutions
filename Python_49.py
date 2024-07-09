```
def modp(n: int, p: int):
    if n == 0 or p == 1:
        return 0
    if n == 1:
        return 1 % p
    return pow(n, p - 2, p) * n % p