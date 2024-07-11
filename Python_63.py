phi = (1 + 5**0.5) / 2


def fibfib(n: int):
    return int((phi**n - (1 - phi) ** n) ** 0.5 / 5**0.5)