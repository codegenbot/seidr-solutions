def fib4(n: int):
    a = 0
    b = 0
    c = 2
    d = 0
    for i in range(n-3):
        e = (a + b) % 16
        f = (c + d) % 16
        a, b = b, e
        c, d = d, f
    return a