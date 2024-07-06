```
def modp(n: int, p: int):
    while n >= p:
        n -= p
    return n