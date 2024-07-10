def fib(n: int):
    if n <= 1:
        return n
    elif n == 2:
        return 1
    a, b = 1, 1
    for _ in range(3, n + 1):
        a, b = b, a + b
    return b