```
def modp(n: int, p: int):
    if n == 0:
        return 0
    res = pow(n, (p-2), p) * n % p
    return res