def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return 1
    else:
        result = pow(n, p-1, p)
        return n * result % p