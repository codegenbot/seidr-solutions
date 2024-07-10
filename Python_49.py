```
def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return None
    elif p <= 0:
        return None
    else:
        result = 1
        while p > 1:
            if p % 2 == 1:
                result = (result * n) % p
            p //= 2
            n = (n * n) % p
        return result