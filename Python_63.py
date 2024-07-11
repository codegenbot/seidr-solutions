```
phi = (1 + 5**0.5) / 2


def fibfib(n: int):
    result = []
    a, b = 0, 1
    for _ in range(n):
        result.append(a)
        a, b = b, a + b
    return result