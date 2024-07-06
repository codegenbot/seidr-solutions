```
def modp(n: int, p: int):
    if n < p:
        return n
    elif n % p == 0:
        return modp(n // p, p)
    else:
        return n - p * modp((n - 1) // p, p)