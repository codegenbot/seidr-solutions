def fibfib(n: int):
    if n < 0:
        return "Error: Input must be non-negative."
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        phi = (1 + 5**0.5) / 2
        psi = 1 - phi
        return int((phi**n - psi**n) / 5**0.5)