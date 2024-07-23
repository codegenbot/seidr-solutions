def modp(n: int, p: int):
    if pow(n, (p - 1) // 2, p) == p - 1:
        return n
    for _ in range(3):
        r = (p - 1) // 2 ** (_ + 1)
        if pow(n, r, p) == p - 1:
            return n
    return modp(n * n % p, p)