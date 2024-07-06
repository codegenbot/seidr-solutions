def modp(n: int, p: int):
    if p == 1:
        return n
    else:
        result = pow(n, p - 1, p)
        return (n * result) % p