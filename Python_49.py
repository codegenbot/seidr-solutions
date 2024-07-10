```
def modp(n: int, p: int):
    n = abs(n)
    return pow(n, 1, p) if n > 0 else 1