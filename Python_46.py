def fib4(n: int):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        a = 1
        b = 1
        c = 2
        d = 4
        for i in range(5, n + 1):
            a, b, c, d = b, c, d, a + b + c + d
        return a