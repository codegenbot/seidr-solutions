```
def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return None
    elif p <= 0:
        return None
    else:
        return n if p == 1 else pow(n, p - 1, p) * n % p