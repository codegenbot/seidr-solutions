def modp(n: int, p: int):
    if n < p:
        return n
    else:
        return (n // p) * p + modp((n // p) % p, p)