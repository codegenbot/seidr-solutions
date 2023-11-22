def fib4(n: int):
        a, b, c, d = 0, 1, 1, 2
        if n == 0:
            return a
        if n == 1:
            return b
        if n == 2:
            return c
        for i in range(3, n + 1):
            a, b, c, d = b, c, d, a + b + c + d
        return d