def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    result = 1
    p = pow(p, 2, p)
    while n > 0:
        if n % 2 == 1:
            result = (result * p) % p
        p = pow(p, 2, p)
        n //= 2
    return result