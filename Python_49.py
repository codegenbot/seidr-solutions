

def modp(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics)."""
    if n == 0:
        return 1
    if n == 1:
        return 2
    if n % 2 == 0:
        n = n // 2
        return (modp(n, p) ** 2) % p
    else:
        n = n // 2
        return (modp(n, p) ** 2 * 2) % p
