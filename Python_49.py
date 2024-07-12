```
def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    result = 1
    while n > 0:
        if n % 2 == 1:
            result = (result * p) % p
        n //= 2
        p = p % p
    return result