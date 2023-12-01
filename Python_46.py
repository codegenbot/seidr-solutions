def fib4(n: int):
    a, b, c, d = 0, 0, 2, 0
    for _ in range(n-2):
        d = a + b + c + d
        a, b, c = b, c, d
    return d