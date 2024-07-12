def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    while True:
        if b % 3 == 0:  
            return b
        if a > n:
            break
        a, b = b, a + b