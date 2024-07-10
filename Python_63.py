def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        sum = 0
        for _ in range(3, n+1): 
            sum += a
            a, b = b, a + b
        return sum + b