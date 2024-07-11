def modp(n: int, p: int):
    return (
        pow(n, 1, p) if n > 0 else (pow(p, 2, p) - 1) // 2 if n == 0 else pow(2, n, p)
    )