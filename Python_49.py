def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return None
    elif p <= 0:
        return None
    else:
        result = pow(n, 1, p)
        return result