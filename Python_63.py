def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    while True:
        if b > n:
            break
        a, b = b, a + b
    return b