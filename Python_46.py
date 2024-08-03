def fib4(n: int):
    if n < 0 or n % 2 == 1:
        return 0
    elif n <= 3:
        return 2 if n == 2 else 0
    a, b, c = 0, 0, 2
    for _ in range(4, n + 1):
        a, b, c = b, c, c + b
    return c