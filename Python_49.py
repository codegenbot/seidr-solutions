```
def modp(n: int, p: int):
    if n < p:
        return n
    else:
        return modp((n % p), p)