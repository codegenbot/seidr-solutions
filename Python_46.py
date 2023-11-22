def fib4(n: int):
    a, b = 0, 1
    if n == 0:
        return a
    if n == 1:
        return b
    for _ in range(n - 1):
        a, b = b, a + b
    return b