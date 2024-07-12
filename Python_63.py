def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        for _ in range(2, min(n+1, 100)):  
            a, b = b, a+b
        if n > 99:
            return pow((1 + 5**0.5)/2, n) - ((1-5**0.5)/2)**n
        return b