def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return None
    elif p <= 0:
        return None
    else:
        result = pow(n, p-1, p)
        if result == p - 1:
            return 1
        else:
            return pow(n, p-2, p) % p * n % p