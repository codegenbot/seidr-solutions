```
def modp(n: int, p: int):
    if n > 0:
        return pow(n, -1, p)
    elif n < 0:
        return pow(p, -1) * n % p
    else:
        return 1 % p if p != 1 else 0