def fib4(n):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        a = 0
        b = 0
        c = 2
        for i in range(5, n+1):
            d = a + b + c
            a = b
            b = c
            c = d
        return c
