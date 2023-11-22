def fib4(n: int):
    a, b, c, d = 0, 1, 1, 1

    for _ in range(n - 4):
        a, b, c, d = b, c, d, a + b + c + d

    return d