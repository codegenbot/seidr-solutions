def fibfib(n: int):
    if n <= 2:
        return 0
    sqrt_5 = (1 + 5 ** 0.5) / 2
    phi = (1 + sqrt_5) / 2
    psi = (1 - sqrt_5) / 2
    return int((phi ** (n + 1) - psi ** (n + 1)) / sqrt_5)