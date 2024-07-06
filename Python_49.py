```
def modp(n: int, p: int):
    if p > n:
        return n
    else:
        return n - p * modp(n // p, p)