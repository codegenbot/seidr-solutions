def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    result = 1
    n %= p
    while n > 0:
        if n % 2 == 1:
            result = (result * n) % p
        n //= 2
    return result