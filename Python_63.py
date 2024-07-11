def fibfib(n: int):
    if n <= 1:
        return n
    sqrt_5 = (1 + 5 ** 0.5) / 2
    phi = (1 + sqrt_5) / 2
    psi = (1 - sqrt_5) / 2
    return int((phi ** n - psi ** n) / sqrt_5)