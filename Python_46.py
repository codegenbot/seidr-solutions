def fib4(n: int):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        a = 0
        b = 0
        c = 2
        d = 0
        for i in range(5, n+1):
            e = a + b + c + d
            a = b
            b = c
            c = d
            d = e
        return d