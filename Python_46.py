def fib4(n: int):
    if n == 0:
        return 0
    if n == 1:
        return 1
    a, b = 0, 1
    total = a + b
    for _ in range(2, n + 1):
        a, b = b, a + b
        total += b
    return total