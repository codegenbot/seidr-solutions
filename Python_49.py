def modp(n: int, p: int):
    inv = pow(n, p - 2, p)
    return (inv * n) % p