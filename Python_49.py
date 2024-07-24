def modp(n: int, p: int):
    if p == 2:
        return 1
    elif n < 0 or p <= 1:
        return None
    result = pow(n, p - 1, p)
    return (n * result) % p