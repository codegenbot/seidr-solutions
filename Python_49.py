```
def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return "Invalid input. Both inputs must be integers."
    elif p <= 0:
        return "Modulus cannot be less than or equal to zero."
    else:
        if pow(n, (p - 1) // 2, p) == p - 1:
            return n
        else:
            inv = pow(n, p - 2, p)
            return n * inv % p