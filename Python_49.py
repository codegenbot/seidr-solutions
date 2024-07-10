```
def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return "Invalid input. Both inputs must be integers."
    elif p <= 0:
        return "Modulus cannot be less than or equal to zero."
    else:
        return pow(n, p-1, p) * n % p