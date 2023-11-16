

def modp(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics)."""
    if n == 0:
        return 1
    else:
        return 2 * modp(n - 1, p) % p


def modp2(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics)."""
    if n == 0:
        return 1
    elif n % 2 == 0:
        return modp2(n / 2, p) ** 2 % p
    else:
        return 2 * modp2(n - 1, p) % p


def modp3(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics)."""
    if n == 0:
        return 1
    elif n % 2 == 0:
        return modp3(n / 2, p) ** 2 % p
    else:
        return 2 * modp3(n / 2, p) ** 2 % p
