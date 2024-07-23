def modp(n: int, p: int):
    if n == 0:
        return 0
    result = pow(n, (p - 1) // 2, p)
    if result * n % p != 1:
        return 1
    return result