def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    if n < 2 or p <= 0:
        return n % p
    
    result = 1
    while p > 0:
        if p % 2 == 1:
            result = (result * n) % p
        n = (n * n) % p
        p //= 2
    return result