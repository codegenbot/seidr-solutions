```
def modp(n: int, p: int):
    if n < 0:
        return pow(-n, p - 2, p) * n % p
    elif n > 0:
        return pow(n, p - 1, p)
    else:
        return 1