def fibfib(n: int):
    if n == 0 or n == 1:
        return 1
    a, b = 1, 1
    for _ in range(2, n + 1):
        a, b = b, (a * phi) + b
    return int(b)