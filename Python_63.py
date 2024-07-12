def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    total = 0
    for _ in range(n):
        if a > n:
            break
        total = a
        a, b = b, a + b
    return total