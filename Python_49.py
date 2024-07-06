def modp(n: int, p: int):
    if n < p:
        return n
    elif n == p:
        return 0
    else:
        return 1 + modp(n - p, p)