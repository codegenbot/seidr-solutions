def fib4(n: int):
    a, b, c, d = 0, 0, 2, 0
    for i in range(4, n + 1):
        a, b, c, d = b, c, d, a + b + c + d
    return d