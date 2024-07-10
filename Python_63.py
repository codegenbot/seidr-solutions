def fibfib(n: int):
    if n <= 1:
        return 0
    elif n % 2 == 0:  
        a, b = 0, 1
        while b * b < n:
            a, b = b, a+b
        return a
    else:
        a, b = 0, 1
        for _ in range(n):
            a, b = b, a+b
        return a