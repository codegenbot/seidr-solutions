def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return None
    elif p <= 0:
        return 1
    else:
        result = 1
        for _ in range(0, p):  
            result = (result * n) % p
        return result