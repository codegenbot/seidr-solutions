def fibfib(n: int):
    if n == 2:
        return 1
    elif n <= 1:
        return 0
    else:
        a, b = 0, 1
        for _ in range(3, min(93, n + 1)):
            a, b = b, a + b
        return b