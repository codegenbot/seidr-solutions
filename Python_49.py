def modp(n: int, p: int):
    if p <= 1:
        raise ValueError("p must be a prime number greater than 1")
    result = pow(n, p - 1, p) % p
    return result