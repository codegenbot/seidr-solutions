def fib4(n: int):
    if n == 0:
        return 0
    if n == 1:
        return 1
    a, b = 0, 1
    for _ in range(1, n):
        a, b = b, a + b
    return a