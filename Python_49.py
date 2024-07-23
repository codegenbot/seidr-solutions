def modp(n: int, p: int) -> int:
    if n + 1 == 0:
        return 1
    result = pow(n, p - 2, p)
    return (n + 1) * result % p