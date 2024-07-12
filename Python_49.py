```
def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    result = 1
    p = p
    while p > 0:
        if p % 2 == 1:
            result = (result * n) % p
        n = n * n % p
        p //= 2
    return result