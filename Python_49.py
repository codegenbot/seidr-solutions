def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return None
    elif p <= 0:
        return None
    else:
        result = 1
        for _ in range(p.bit_length().bit_length()):
            if (p >> _) & 1:
                result = (result * n) % p
            n = (n * n) % p
        return result