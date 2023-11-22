def fib4(n: int):
    a, b, c, d = 0, 1, 1, 2
    if n <= 2:
        return [a, b, c][n]
    for _ in range(3, n + 1):
        a, b, c, d = b, c, d, a + b + c + d
    return d