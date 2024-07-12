def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    total = 0
    while True:
        if total > n:
            break
        total += b
        a, b = b, a + b
    return total