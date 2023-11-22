def fib4(n: int):
    a, b, c = 0, 1, 2
    if n == 0:
        return a
    if n == 1:
        return b
    if n == 2:
        return c
    for i in range(3, n + 1):
        a, b, c = b, c, a + b + c
    return c