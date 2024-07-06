
def fibfib(n: int):
    if n <= 2:
        return 0
    else:
        a = 1
        b = 0
        c = 0
        for i in range(3, n+1):
            c = a + b + fibfib(i-3)
            a = b
            b = c
        return c