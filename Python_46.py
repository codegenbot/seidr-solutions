def fib4(n: int):
    if n <= 2:
        return 0
    elif n == 3:
        return 2
    else:
        a, b, c = 0, 0, 1
        for i in range(4, n+1):
            a, b, c = b, c, a + b + c
        return c