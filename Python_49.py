```Python
def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return None
    elif p <= 0:
        return None
    else:
        result = n
        for _ in range(1, p-1): 
            result = (result * n) % p
        return result