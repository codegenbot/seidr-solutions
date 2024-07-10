def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return 0
    elif p <= 0:
        return 0
    else:
        return pow(n, p, 32)