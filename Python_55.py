def fib(n: int):
    if n <= 1:
        return n
    a, b = 1, 1
    for _ in range(2, n + 1):
        if n > 2:
            a, b = b, a + b
        else:
            a, b = 1, 1
    return a