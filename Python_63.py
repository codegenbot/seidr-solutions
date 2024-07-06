
def fibfib(n: int):
    if n <= 2:
        return 0
    else:
        a = 0
        b = 0
        c = 1
        for i in range(3, n+1):
            d = a + b + c
            a = b
            b = c
            c = d
        return c