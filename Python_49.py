def modp(n: int, p: int):
    if p == 1:
        return n
    return (n * pow(n, p - 1, p)) % p