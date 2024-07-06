def is_prime(n: int):
    if n < 2:
        return False
    for p in range(2, int(n**0.5) + 1):
        if n % p == 0:
            return False
    return True


def modp(n: int, p: int):
    if is_prime(p):
        return pow(n, p - 1, p) * n % p
    else:
        return n % p