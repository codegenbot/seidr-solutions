

def modp(n: int, p: int) -> int:
    if n == 0:
        return 1
    elif n == 1:
        return 2
    elif n % 2 == 0:
        return modp(n // 2, p) ** 2 % p
    else:
        return modp(n // 2, p) ** 2 * 2 % p
