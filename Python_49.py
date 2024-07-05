def modp(n: int, p: int):
    result = pow(n, p - 1, p)
    return n * result % p