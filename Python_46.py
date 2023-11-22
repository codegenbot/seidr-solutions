def fib4(n: int):
    if n == 0:
        return 0
    if n == 1:
        return 0
    a, b = 0, 1
    total = 0
    for _ in range(2, n + 1):
        a, b = b, a + b
        if b % 2 == 0:
            total += b
    return total