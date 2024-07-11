def fib4(n: int):
    if n < 0 or n > 10:
        return "Input out of range"
    a, b, c, d = 0, 0, 2, 0
    for _ in range(5, n + 1):
        a, b, c, d = b, c, d, a + b + c
    return d