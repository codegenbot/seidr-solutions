def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    return n % p