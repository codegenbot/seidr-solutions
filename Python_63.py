def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    elif n == 3:
        return 1
    a, b = 0, 1
    for _ in range(4, n + 1):
        a, b = b, a + b
    return b