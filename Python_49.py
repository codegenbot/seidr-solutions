def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return 
    elif p <= 0:
        return 
    else:
        return pow(n, p-1, p) * n % p