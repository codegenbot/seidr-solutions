def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return None
    elif p <= 0:
        return None
    elif gcd(n, p) == 1:
        return 1
    else:
        result = 1
        for _ in range(1, p):
            result = (result * n) % p
        return result


def gcd(a: int, b: int) -> int:
    while b != 0:
        a, b = b, a % b
    return abs(a)