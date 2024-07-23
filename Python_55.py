def fib(n: int):
    if n <= 1:
        return n
    if n == 2:
        return 1
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b