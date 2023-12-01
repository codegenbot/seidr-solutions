def fib4(n: int):
    a, b, c, d = 0, 0, 2, 0
    for _ in range(n):
        a, b, c, d = b, c, d, a + b + c + d
    return a