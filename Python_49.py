```
def modp(n: int, p: int):
    res = 1
    while p > 0:
        if p & 1:
            res = (res * n) % p
        p //= 2
        n = (n * n) % p
    return res