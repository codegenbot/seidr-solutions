```
def modp(n: int, p: int):
    if n < 1:
        return pow(p - 1, 1, p)
    elif n > p // 2:
        return modp(p - n, p)
    else:
        return pow(n, 1, p)