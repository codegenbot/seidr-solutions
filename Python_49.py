def modp(n: int, p: int):
    if p == 1:
        return n
    return (n ** ((p - 1) // 2)) ** 2 * n % p