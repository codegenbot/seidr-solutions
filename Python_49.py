```
def modp(n: int, p: int):
    if n < p:
        return n
    else:
        return n - p * modp(n // p, p)