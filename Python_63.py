def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    total = 0
    while True:
        total += a
        if a > n:
            break
        a, b = b, a + b
    return total