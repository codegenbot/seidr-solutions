```
def modp(n: int, p: int):
    if n == 0:
        return 0
    x = pow(n, p - 2, p)
    return x if n % 2 == 1 else 1