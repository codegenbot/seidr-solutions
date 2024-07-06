```
def modp(n: int, p: int):
    if p == 1:
        return 0
    res = pow(n, p - 1, p)
    return (res * n) % p