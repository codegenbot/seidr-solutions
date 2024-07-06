def modp(n: int, p: int):
    if n == 1 or p == 2 or p == 0:
        return n
    if p % 2 == 0:
        result = pow(modp(n, p // 2), 2, p)
    else:
        result = n
    return result