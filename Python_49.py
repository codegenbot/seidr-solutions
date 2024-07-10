```
def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n % p
    else:
        return pow(n, p - 1, p) * (n % p)