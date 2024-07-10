```
def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        raise ValueError("Input values must be integers.")
    elif p <= 0:
        raise ValueError("Modulus (p) cannot be less than or equal to zero.")
    else:
        result = 1
        for _ in range(1, p):
            result = (result * n) % p
        return result