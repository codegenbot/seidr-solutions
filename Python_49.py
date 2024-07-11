def modp(n: int, p: int):
    if n < 0:
        return -modp(-n, p)
    result = pow(n, p - 1, p)
    return result